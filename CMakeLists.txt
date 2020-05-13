cmake_minimum_required(VERSION 3.15)
project(DataStructure)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStructure main.cpp linkedlist/Node.cpp linkedlist/Node.h linkedlist/LinkedList.cpp linkedlist/LinkedList.h)