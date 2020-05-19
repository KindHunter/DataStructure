//
// Created by seven on 2020/5/19.
//

#ifndef DATASTRUCTURE_LINKEDSTACK_H
#define DATASTRUCTURE_LINKEDSTACK_H

#include "ArrayStack.h"
#include "../linkedlist/LinkedList.h"

class LinkedStack {
public:
    LinkedList *myList;
    LinkedStack();
    int pop();
    bool push(int data);

};


#endif //DATASTRUCTURE_LINKEDSTACK_H
