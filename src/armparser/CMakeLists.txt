# minimum required CMAKE version
CMAKE_MINIMUM_REQUIRED(VERSION 3.7 FATAL_ERROR)
project(ArmParserLibrary)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

# compiler must be 11 or 14
set(CMAKE_CXX_STANDARD 11)

# required if linking to static library
add_definitions(-DANTLR4CPP_STATIC)

# using /MD flag for antlr4_runtime (for Visual C++ compilers only)
set(ANTLR4_WITH_STATIC_CRT OFF)
# add external build for antlrcpp
include(ExternalAntlr4Cpp)
# add antrl4cpp artifacts to project environment
include_directories(${ANTLR4_INCLUDE_DIRS})

# set variable pointing to the antlr tool that supports C++
# this is not required if the jar file can be found under PATH environment
set(ANTLR_EXECUTABLE ${CMAKE_CURRENT_SOURCE_DIR}/external/antlr-4.8-complete.jar)
# add macros to generate ANTLR Cpp code from grammar
find_package(ANTLR REQUIRED)
# Call macro to add lexer and grammar to your build dependencies.

# antlr_target(ARMLexer grammar/ARMLexer.g4 LEXER
#        PACKAGE assembler)
#antlr_target(ARMParser grammar/ARMParser.g4 PARSER
#        PACKAGE assembler
#        DEPENDS_ANTLR ARMLexer
#        COMPILE_FLAGS -lib ${ANTLR_ARMLexer_OUTPUT_DIR})


# include generated files in project environment
#include_directories(${ANTLR_ARMLexer_OUTPUT_DIR})
#include_directories(${ANTLR_ARMParser_OUTPUT_DIR})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/assembler)
file(GLOB parser_out
        "${CMAKE_CURRENT_SOURCE_DIR}/assembler/*.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/assembler/*.cpp"
        )
#include_directories(${ANTLR4_INCLUDE_DIR_ARMLexer} ${ANTLR4_INCLUDE_DIR_ARMParser})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/walker)
file(GLOB sources
        "${CMAKE_CURRENT_SOURCE_DIR}/walker/*.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/walker/*.cpp"
        )

    set(Parser_SRC
            ${parser_out}
            #${sources}
            )

# add generated grammar to demo binary target
add_library(parserlib STATIC ${Parser_SRC}
        #${ANTLR_ARMLexer_CXX_OUTPUTS}
        #${ANTLR_ARMParser_CXX_OUTPUTS}
        )
target_link_libraries(parserlib antlr4_static)
