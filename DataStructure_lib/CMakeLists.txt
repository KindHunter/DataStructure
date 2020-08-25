project(DataStructure_lib)

set(HEADER_FILES
        linkedlist/LinkedList.h
        linkedlist/Node.h
        stack/ArrayStack.h
        stack/LinkedStack.h
        queue/ArrayQueue.h
        sort/BubbleSort.h
        sort/InsertionSort.h
        sort/ShellSort.h
        sort/MergeSort.h
        sort/QuickSort.h
        search/BinarySearch.h
        graph/BFS.h
        graph/DFS.h)

set(SOURCE_FILES
        linkedlist/LinkedList.cpp
        linkedlist/Node.cpp
        stack/ArrayStack.cpp
        stack/LinkedStack.cpp
        queue/ArrayQueue.cpp
        sort/BubbleSort.cpp
        sort/InsertionSort.cpp
        sort/ShellSort.cpp
        sort/MergeSort.cpp
        sort/QuickSort.cpp
        search/BinarySearch.cpp
        graph/BFS.cpp
        graph/DFS.cpp)

add_library(DataStructure_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})