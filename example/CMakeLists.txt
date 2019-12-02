cmake_minimum_required(VERSION 3.1)

project(Run)

set(CMAKE_BUILD_TYPE Release)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -g")

find_package(docopt COMPONENTS CXX REQUIRED)
message(STATUS "-------- ${DOCOPT_INCLUDE_DIRS}")
include_directories(${DOCOPT_INCLUDE_DIRS})

find_package(xtensor REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME}
  xtensor
  docopt)
