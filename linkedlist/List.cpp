//
// Created by seven on 2020/4/28.
//
#include <stdio.h>
#include "List.h"
#include "Node.h"
#include <iostream>
using namespace std;



List :: List(void){
    this->head = new Node;
    this->tail = new Node;
    this->head->next = tail;
}

Node * List::get(int index) {
    if(index < 0 || index > (this-> size-1)){
        throw "index not illegal!";
    }
    Node *n = this->head;
    for (int position = 0; position <= index; position++) {
        n = n->next;
    }
    return n;
}

void List::add(int index, int data){
    if(index < 0 || index > (this-> size)){
        throw "index not illegal!";
    }
    Node *node;
    Node *nextNode;
    if(index == 0){
        node = this->head;
        nextNode = this->head->next;
    }else{
        node = get(index - 1);
        nextNode = node->next;
    }

    Node *newNode = new Node;
    newNode->data = data;



}

