
if(NOT "/home/user/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/asmeditor/linrelease/antlr4_runtime/src/antlr4_runtime-stamp/antlr4_runtime-gitinfo.txt" IS_NEWER_THAN "/home/user/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/asmeditor/linrelease/antlr4_runtime/src/antlr4_runtime-stamp/antlr4_runtime-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/home/user/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/asmeditor/linrelease/antlr4_runtime/src/antlr4_runtime-stamp/antlr4_runtime-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E remove_directory "/home/user/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/asmeditor/linrelease/antlr4_runtime/src/antlr4_runtime"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/home/user/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/asmeditor/linrelease/antlr4_runtime/src/antlr4_runtime'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git"  clone --no-checkout "https://github.com/antlr/antlr4.git" "antlr4_runtime"
    WORKING_DIRECTORY "/home/user/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/asmeditor/linrelease/antlr4_runtime/src"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/antlr/antlr4.git'")
endif()

execute_process(
  COMMAND "/usr/bin/git"  checkout master --
  WORKING_DIRECTORY "/home/user/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/asmeditor/linrelease/antlr4_runtime/src/antlr4_runtime"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'master'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git"  submodule update --recursive --init 
    WORKING_DIRECTORY "/home/user/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/asmeditor/linrelease/antlr4_runtime/src/antlr4_runtime"
    RESULT_VARIABLE error_code
    )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/home/user/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/asmeditor/linrelease/antlr4_runtime/src/antlr4_runtime'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/home/user/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/asmeditor/linrelease/antlr4_runtime/src/antlr4_runtime-stamp/antlr4_runtime-gitinfo.txt"
    "/home/user/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/asmeditor/linrelease/antlr4_runtime/src/antlr4_runtime-stamp/antlr4_runtime-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/home/user/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/asmeditor/linrelease/antlr4_runtime/src/antlr4_runtime-stamp/antlr4_runtime-gitclone-lastrun.txt'")
endif()

