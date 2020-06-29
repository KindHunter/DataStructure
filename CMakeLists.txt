cmake_minimum_required(VERSION 3.15)
project(DataStructure)

set(CMAKE_CXX_STANDARD 14)
add_executable(DataStructure main.cpp)

include_directories(DataStructure_lib)
add_subdirectory(DataStructure_lib)



target_link_libraries(DataStructure DataStructure_lib)

add_subdirectory(Google_tests)
