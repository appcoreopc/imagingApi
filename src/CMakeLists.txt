cmake_minimum_required(VERSION 2.8.12)
project(imagingApi)

add_definitions("-std=c++11")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(imagingApi main.cc)
target_link_libraries(imagingApi ${CONAN_LIBS})