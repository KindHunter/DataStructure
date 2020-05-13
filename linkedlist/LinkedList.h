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

    LinkedList(void);

    void addFirst(int data);

    void addLast(int data);

    bool contains(int data);

    bool remove(int data);

    Node * get(int index);

    void add(int index, int data);

};






#endif //DATASTRUCTURE_LINKEDLIST_H
