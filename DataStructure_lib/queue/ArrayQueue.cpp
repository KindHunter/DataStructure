//
// Created by seven on 2020/7/6.
//

#include "ArrayQueue.h"

ArrayQueue::ArrayQueue(int queueSize) {
    if(queueSize <= 0){
        throw "queue size must be positive!"
    }
    this->queueSize = queueSize;
    this->arrayP = new int[queueSize]();
    this->headIndex = 0;
    this->tailIndex = -1;
}

ArrayQueue::bool ArrayQueue::enqueue(int data) {
    int enqueueIndex = (this->tailIndex + 1) % this->queueSize;
    if(enqueueIndex == this->headIndex){
        return false;
    }
    this->tailIndex = enqueueIndex;
    this->arrayP[tailIndex] = data;
}

int ArrayQueue::dequeue() {
    if(tailIndex == -1){
        throw "empty queue!"
    }
    int data = arrayP[this->headIndex];
    if(this->tailIndex == this->headIndex){
        this->tailIndex = -1;
    }else {

    }

}
