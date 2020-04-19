cmake_minimum_required(VERSION 3.5)

project(AsmEditor LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ANTLR
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
add_definitions(-DANTLR4CPP_STATIC)
set(ANTLR4_WITH_STATIC_CRT OFF)
include(ExternalAntlr4Cpp)
include_directories(${ANTLR4_INCLUDE_DIRS})
set(ANTLR_EXECUTABLE ${CMAKE_CURRENT_SOURCE_DIR}/external/antlr-4.8-complete.jar)
find_package(ANTLR REQUIRED)






#parser
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/armparser/assembler)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/armparser/walker)
#file(GLOB sources
#        "${CMAKE_CURRENT_SOURCE_DIR}/armparser/walker/*.h"
#        "${CMAKE_CURRENT_SOURCE_DIR}/armparser/walker/*.cpp"
#        "${CMAKE_CURRENT_SOURCE_DIR}/armparser/assembler/*.h"
#        "${CMAKE_CURRENT_SOURCE_DIR}/armparser/assembler/*.cpp"
#        )

file(GLOB all
    "*.cpp"
    "*.h"
    "*.ui"
    "*.qrc"
    "**/*.cpp"
    "**/*.h"
    "**/*.ui"
    "**/*.qrc"
    "**/**/*.cpp"
    "**/**/*.h"
    "**/**/*.ui"
    "**/**/*.qrc"
)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/codearea)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/managers)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/armparser)

find_package(Qt5 COMPONENTS Widgets Gui REQUIRED)

if(ANDROID)
  add_library(AsmEditor SHARED
      ${all}
  )
else()
  add_executable(AsmEditor
      ${all} armprocessor/bits.cpp armprocessor/architecture/ALU.cpp)
endif()

target_link_libraries(AsmEditor PRIVATE Qt5::Widgets)
target_link_libraries(AsmEditor PUBLIC antlr4_static)
