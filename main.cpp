#include <iostream>
#include "linkedlist/LinkedList.h"
#include "linkedlist/Node.h"
#include "stack/ArrayStack.h"

using namespace std;
int main() {
    try {
        /*LinkedList *myList = new LinkedList();
        cout << myList->size << endl;

        myList->addFirst(11);
        myList->addFirst(12);
        myList->addFirst(13);
        myList->addFirst(14);
        myList->addLast(15);

        myList->remove(4);
        cout << "current size:" << myList->size << endl;
        for (int i = 0; i < myList->size; ++i) {
            cout << "index:" << i << ", data:" << myList->get(i)->data << endl;
        }
        cout << myList->contains(18) << endl;
        std::cout << "Hello, World!" << std::endl;
        delete myList;*/

        /*auto *myStack = new ArrayStack(4);

        myStack->push(121);
        myStack->push(222);
        myStack->push(333);
        myStack->push(444);
        for (int i = 0; i < 4; ++i) {
            cout << myStack->pop() << endl;
        }*/



        return 0;
    } catch (const char *msg){
        cerr << msg << endl;
    }


}
