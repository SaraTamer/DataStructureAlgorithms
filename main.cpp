#include <iostream>
#include "Stack.h"
#include "SingleLinkedList.h"


int main()
{
// single linked list testing:

    SingleLinkedList<int> intList;
    intList.insertFirst(3 );
    intList.insertFirst(4 );
    intList.insertFirst(2 );
    intList.insertAt(100 , 2);
    intList.insertAt(200 , 1);
    intList.print();

// stack testing

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
