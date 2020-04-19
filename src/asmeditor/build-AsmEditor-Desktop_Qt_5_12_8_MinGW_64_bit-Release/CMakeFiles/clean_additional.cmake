# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "AsmEditor_autogen"
  "CMakeFiles\\AsmEditor_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\AsmEditor_autogen.dir\\ParseCache.txt"
  )
endif()
