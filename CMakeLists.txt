cmake_minimum_required(VERSION 2.6)

#enable_testing()

include_directories(include)

add_subdirectory( src build/src )
add_subdirectory( test build/test )