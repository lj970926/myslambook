cmake_minimum_required(VERSION 2.8)
project(imageBasics)

set(CMAKE_CXX_FLAGS "-std=c++11")

find_package(OpenCV 3 REQUIRED)
message(STATUS ${OPENCV_LIBS})

include_directories(${OPENCV_INCLUDE_DIRS})

add_executable(imageBasics imageBasics.cc)

target_link_libraries(imageBasics ${OpenCV_LIBS})