//
// Created by seven on 2020/4/28.
//

#ifndef DATASTRUCTURE_LINKEDLIST_H
#define DATASTRUCTURE_LINKEDLIST_H
#include "Node.h"



class LinkedList {

public:
    Node *head;
    Node *tail;
    int size;

    /**
     * 构造函数
     */
    LinkedList(void);

    /**
     * 在链表头添加一个数据
     * @param data
     */
    void addFirst(int data);

    /**
     * 在链表尾添加一个数据
     * @param data
     */
    void addLast(int data);

    /**
     * 判断是否包含某个数据
     * @param data
     * @return
     */
    bool contains(int data);

    /**
     * 移除指定位置的数据
     * @param index
     * @return
     */
    bool remove(int index);

    /**
     * 获取知道指定位置的节点
     * @param index
     * @return
     */
    Node * get(int index);

    /**
     * 在指定一个位置添加一个数据
     * @param index
     * @param data
     */
    void add(int index, int data);


    /**
     * 翻转链表
     * @return
     */
    LinkedList * reverse();

    /**
     * 链表合并
     * @param mergeList
     */
    void addAll(LinkedList *mergeList);

    /**
     * 校验链表是否有环
     */
    bool validateLoop();

private:
    /**
     * 通过index获取node，如果是-1获取head，如果是size获取到tail
     * @param index
     * @return
     */
    Node * getByIndexIncludeHeadTail(int index);

};






#endif //DATASTRUCTURE_LINKEDLIST_H
