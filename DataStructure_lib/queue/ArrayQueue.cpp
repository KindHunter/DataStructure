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
    this->empty = true;
}

bool ArrayQueue::enqueue(int data) {
    if(isFull()){
        return false;
    }
    this->arrayP[tailIndex] = data;
    this->tailIndex = (this->tailIndex + 1) % this->queueSize;
    this->empty = false;
    return true;
}

int ArrayQueue::dequeue() {
    if(this->isEmpty()){
        throw "empty queue!";
    }
    int data = arrayP[this->headIndex];
    this->headIndex = (this->headIndex + 1) % this->queueSize;
    if(this->headIndex == this->tailIndex) {
        this->empty = true;
    }
    return data;

}


/**
 * 这里有另外一种优雅实现，通过tailIndex == headIndex来判空，通过（tailIndex + 1）% queueSize == headIndex 来判满，
 * 感觉更优雅，但是会浪费一个数组存储位
 */

bool ArrayQueue :: isEmpty(){
    return this->empty;
}

bool ArrayQueue::isFull() {
    return !empty && this->headIndex == this->tailIndex;
}
