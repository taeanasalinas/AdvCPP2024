#include "OrderedCircularLinkedList.h"
#include "OrderedDoublyLinkedList.h"
#include <iostream>
 
int main() {
    OrderedCircularLinkedList circularList;
    OrderedDoublyLinkedList doublyList;
 
    int testData[] = {30, 25, 35, 20, 40};
 
    
    cout << "Ordered Circular Linked List:" << endl;
    for (int value : testData) {
        circularList.insertOrdered(value);
    }
    circularList.printList();
 

    cout << "\nOrdered Doubly Linked List:" << endl;
    for (int value : testData) {
        doublyList.insertOrdered(value);
    }
    doublyList.printForward();
    doublyList.printBackward();
 
    return 0;
}
