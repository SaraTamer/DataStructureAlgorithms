#include <iostream>
#include "Stack.h"
#include "SingleLinkedList.h"


int main()
{
//// single linked list testing:

    SingleLinkedList<int> intList;
    intList.insertAtHead(3 );
    intList.insertAtHead(4 );
    intList.insertAtHead(2 );
    intList.insertAt(100 , 2);
    intList.insertAt(200 , 1);
//    intList.removeAtHead();
//    intList.removeAtTail();
//    intList.removeAt(1);
    intList.print();
    cout << intList.retrieveAt(3);

//// stack testing

//    Stack<int> intStack(5);
//    intStack.push(100);
//    intStack.push(1);
//    intStack.push(2);
//    cout << intStack.Top();
//    intStack.print();
//    intStack.clear();
//    cout << intStack.size();
//
//    cout << intStack.pop();
    return 0;
}
