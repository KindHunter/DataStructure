//
// Created by seven on 2020/4/28.
//

#ifndef DATASTRUCTURE_LIST_H
#define DATASTRUCTURE_LIST_H
#include "Node.h"


class List {
    Node *head;
    Node *tail;
    int size;

    List(void);

    void addFirst(int data);

    void addLast(int data);

    bool contains(int data);

    bool remove(int data);

    Node * get(int index);

    void add(int index, int data);

};






#endif //DATASTRUCTURE_LIST_H
