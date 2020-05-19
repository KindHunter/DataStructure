//
// Created by seven on 2020/5/14.
//

#include "ArrayStack.h"

ArrayStack :: ArrayStack(int stackSize){
    this->stackSize = stackSize;
    this->currentStackSize = 0;
    //动态数组初始化
    this->arrayP = new int [stackSize]();
}


bool ArrayStack::push(int data) {
    if(currentStackSize >= stackSize){
        return false;
    }
    *(this->arrayP+currentStackSize) = data;
    this->currentStackSize++;
    return true;
}

int ArrayStack::pop() {
    if(this->currentStackSize == 0){
        throw "empty stack!";
    }

    int retData = this->arrayP[this->currentStackSize -1];
    this->currentStackSize--;
    return retData;
}
