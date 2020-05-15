//
// Created by seven on 2020/5/14.
//

#include "ArrayStack.h"

ArrayStack :: ArrayStack(int stackSize){
    this->stackSize = stackSize;
    this->currentStackSize = 0;
    int a[stackSize];
    this->arrayP = a;
}


void ArrayStack::push(int data) {
    if(currentStackSize >= stackSize){
        throw "stack over flow!";
    }
    this->arrayP[currentStackSize] = data;
    this->currentStackSize = this->currentStackSize + 1;
}

int ArrayStack::pop() {
    if(this->currentStackSize = 0){
        throw "empty stack!";
    }

    int retData = this->arrayP[this->currentStackSize -1];
    this->arrayP[this->currentStackSize -1] = 0;
    this->currentStackSize = this->currentStackSize -1;
    return retData;
}
