cmake_minimum_required(VERSION 3.1)

project(Run)

set(CMAKE_BUILD_TYPE Release)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(docopt)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} docopt)

