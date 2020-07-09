//
// Created by seven on 2020/7/6.
//

#include "ArrayQueue.h"

ArrayQueue::ArrayQueue(int queueSize) {
    if(queueSize <= 0){
        throw "queue size must be positive!";
    }
    this->queueSize = queueSize;
    this->arrayP = new int[queueSize]();
    this->headIndex = 0;
    this->tailIndex = 0;
    this->isEmpty = true;
}

bool ArrayQueue::enqueue(int data) {
    if(this->tailIndex == this->headIndex
        && !this->isEmpty){
        return false;
    }
    this->arrayP[tailIndex] = data;
    this->tailIndex = (this->tailIndex + 1) % this->queueSize;
    this->isEmpty = false;
}

int ArrayQueue::dequeue() {
    if(this->isEmpty){
        throw "empty queue!";
    }
    int data = arrayP[this->headIndex];
    this->headIndex = (this->headIndex + 1) % this->queueSize;
    if(this->headIndex == this->tailIndex) {
        this->isEmpty = true;
    }
    return data;

}
