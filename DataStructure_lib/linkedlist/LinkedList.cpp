//
// Created by seven on 2020/4/28.
//
#include <stdio.h>
#include "LinkedList.h"
#include "Node.h"
#include <iostream>
using namespace std;



LinkedList :: LinkedList(void){
    this->head = new Node;
    this->tail = new Node;
    this->head->next = tail;
    this->size = 0;
}

Node * LinkedList::get(int index) {
    if(index < 0 || index > (this-> size-1)){
        throw "index not illegal!";
    }
    return getByIndexIncludeHeadTail(index);
}

void LinkedList::addFirst(int data){
    this->add(0, data);
};

void LinkedList::addLast(int data) {
    this->add(this->size, data);
}

void LinkedList::add(int index, int data){
    if(index < 0 || index > (this-> size)){
        throw "index not illegal!";
    }
    Node *node;
    Node *nextNode;

    node = getByIndexIncludeHeadTail(index - 1);
    nextNode = node->next;

    Node *newNode = new Node;
    newNode->data = data;
    node->next = newNode;
    newNode->next = nextNode;
    this->size = size + 1;

}

bool LinkedList::contains(int data) {
    Node * currentNode = this->head;
    for (int i = 0; i < this->size; ++i) {
        currentNode = currentNode->next;
        if(currentNode->data == data){
            return true;
        }
    }
    return false;
}


bool LinkedList::remove(int index) {
    if(index < 0 || index > (this->size - 1)){
        return false;
    }
    Node *previousNode = this->getByIndexIncludeHeadTail(index - 1);
    Node *removeNode = this->getByIndexIncludeHeadTail(index);

    previousNode->next = removeNode->next;
    this->size = this->size-1;

    delete removeNode;

    return true;

}

Node * LinkedList::getByIndexIncludeHeadTail(int index) {

    if (index < -1 || index > this->size){
        throw "error index";
    }

    if(index == -1){
        return this->head;
    }
    Node *n = this->head;
    for (int position = 0; position <= index; position++) {
        n = n->next;
    }
    return n;
}

LinkedList *LinkedList::reverse() {
    LinkedList * reversedLinkList = new LinkedList();
    if (this->size <= 0){
        return reversedLinkList;
    }
    Node * currentNode = this->head;
    for (int i = 0; i < this->size; ++i) {
        currentNode = currentNode->next;
        reversedLinkList->addFirst(currentNode->data);
    }

    return reversedLinkList;
}

void LinkedList::addAll(LinkedList *mergeList) {
    for (int i = 0; i < mergeList->size; ++i) {
        this->addLast(mergeList->get(i)->data);
    }
}



