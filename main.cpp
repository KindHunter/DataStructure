#include <iostream>
#include "linkedlist/LinkedList.h"
#include "linkedlist/Node.h"

using namespace std;
int main() {
    LinkedList *myList = new LinkedList();
    cout << myList->size << endl;

    myList->addFirst(11);
    myList->addFirst(12);
    myList->addFirst(13);
    myList->addFirst(14);

    cout << myList->size << endl;
    for (int i = 0; i < myList->size; ++i) {
        cout << myList->get(i)->data << endl;
    }
    std::cout << "Hello, World!" << std::endl;
    delete myList;
    return 0;
}
