//
// Created by seven on 2020/5/14.
//

#ifndef DATASTRUCTURE_ARRAYSTACK_H
#define DATASTRUCTURE_ARRAYSTACK_H


class ArrayStack {
public:
    int stackSize;
    int currentStackSize;
    int *arrayP;
    ArrayStack(int stackSize);
    int pop();
    bool push(int data);


};


#endif //DATASTRUCTURE_ARRAYSTACK_H
