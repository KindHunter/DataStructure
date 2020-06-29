//
// Created by seven on 2020/5/19.
//

#include "LinkedStack.h"



LinkedStack::LinkedStack() {
    this->myList = new LinkedList();
}

bool LinkedStack::push(int data) {
    myList->addLast(data);
    return true;
}

int LinkedStack::pop() {
    if(this->myList->size == 0){
        throw "empty stack";
    }
    int index = (myList->size - 1);
    int retData = myList->get(index)->data;
    myList->remove(index);
    return retData;
}