project(DataStructure_lib)

set(HEADER_FILES
        linkedlist/LinkedList.h
        linkedlist/Node.h
        stack/ArrayStack.h
        stack/LinkedStack.h
        )

set(SOURCE_FILES
        linkedlist/LinkedList.cpp
        linkedlist/Node.cpp
        stack/ArrayStack.cpp
        stack/LinkedStack.cpp
        )

add_library(DataStructure_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})