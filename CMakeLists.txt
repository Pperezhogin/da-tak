cmake_minimum_required(VERSION 3.5)

project(ProjectName)

enable_testing()

include_directories(include)

add_subdirectory(test)
add_subdirectory(src)