set(CMAKE_CXX_COMPILER g++)

cmake_minimum_required(VERSION 3.24.2)

project(thu-dsacpp)

include_directories("${PROJECT_SOURCE_DIR}/include")

file(GLOB_RECURSE SOURCES "src/*.cc")

add_executable(dsacpp ${SOURCES})

set_target_properties(dsacpp PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build
)
