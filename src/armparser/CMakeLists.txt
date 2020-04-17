cmake_minimum_required(VERSION 3.16)
project(armparser)


#list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
# compiler must be 11 or 14
set(CMAKE_CXX_STANDARD 11)

# required if linking to static library
#add_definitions(-DANTLR4CPP_STATIC)

# add external build for antlrcpp
#include(ExternalAntlr4Cpp)

set(ANTLR_EXECUTABLE C:/JavaLib/antlr-4.8-complete.jar)
#find_package(ANTLR REQUIRED)

include_directories(assembler)
include_directories(walker)
include_directories(include)

add_executable(armparser
        main.cpp
        assembler/ARMLexer.cpp
        assembler/ARMLexer.h
        assembler/ARMParser.cpp
        assembler/ARMParser.h
        assembler/ARMParserBaseListener.cpp
        assembler/ARMParserBaseListener.h
        assembler/ARMParserBaseVisitor.cpp
        assembler/ARMParserBaseVisitor.h
        assembler/ARMParserListener.cpp
        assembler/ARMParserListener.h
        assembler/ARMParserVisitor.cpp
        assembler/ARMParserVisitor.h
        walker/CommandVisitor.cpp
        walker/CommandVisitor.h
        )

add_library(antlr SHARED lib/antlr4-runtime.lib)
set_target_properties(antlr PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries(armparser antlr)