cmake_minimum_required(VERSION 2.8)

project(HelloSLAM)

add_executable(helloSLAM helloSLAM.cc)

add_library(hello libHelloSLAM.cc)

add_library(hello_shared SHARED libHelloSLAM.cc)

add_executable(useHello useHello.cc)

target_link_libraries(useHello hello_shared)

set( CMAKE_BUILD_TYPE "Debug" )
