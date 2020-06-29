#include <iostream>
#include "DataStructure_lib/linkedlist/LinkedList.h"
#include "DataStructure_lib/linkedlist/Node.h"
#include "DataStructure_lib/stack/ArrayStack.h"
#include "DataStructure_lib/stack/LinkedStack.h"

using namespace std;
int main() {
    try {
        //链表
        LinkedList *myList = new LinkedList();
        cout << myList->size << endl;

        myList->addFirst(11);
        myList->addFirst(12);
        myList->addFirst(13);
        myList->addFirst(14);
        myList->addLast(15);


        cout << "current size:" << myList->size << endl;
        int listSize = myList->size;
        for (int i = 0; i < listSize; ++i) {
            cout << "index:" << i << ", data:" << myList->get(0)->data << endl;
            myList->remove(0);
        }
        cout << myList->contains(18) << endl;
        std::cout << "Hello, World!" << std::endl;
        delete myList;

        //数组栈
        /*auto *myStack = new ArrayStack(4);

        myStack->push(121);
        myStack->push(222);
        myStack->push(333);
        myStack->push(444);
        for (int i = 0; i < 4; ++i) {
            cout << myStack->pop() << endl;
        }*/



        //链表栈
        /*LinkedStack *myLinkedStack = new LinkedStack();

        myLinkedStack->push(90);
        myLinkedStack->push(91);
        myLinkedStack->push(92);
        cout << myLinkedStack->pop() << endl;
        cout << myLinkedStack->pop() << endl;
        cout << myLinkedStack->pop() << endl;*/



        return 0;
    } catch (const char *msg){
        cerr << msg << endl;
    }


}
