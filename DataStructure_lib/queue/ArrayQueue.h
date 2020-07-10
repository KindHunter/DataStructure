//
// Created by seven on 2020/7/6.
//

#ifndef DATASTRUCTURE_ARRAYQUEUE_H
#define DATASTRUCTURE_ARRAYQUEUE_H


class ArrayQueue {
public:

    /**
     * 是否为空
     */
    bool empty;
    /**
     * 队列大小
     */
    int queueSize;
    /**
     * 队首index
     */
    int headIndex;
    /**
     * 队末index
     */
    int tailIndex;
    /**
     * 队列数组指针
     */
    int *arrayP;
    /**
     * 构造函数
     * @param queueSize
     */
    ArrayQueue(int queueSize);
    /**
     * 入队操作
     * @param data
     * @return
     */
    bool enqueue(int data);
    /**
     * 出队操作
     * @return
     */
    int dequeue();

    /**
     * 判断是否队列为空
     * @return
     */
    bool isEmpty();

    /**
     * 判断是否队列是满的
     * @return
     */
    bool isFull();


};


#endif //DATASTRUCTURE_ARRAYQUEUE_H
