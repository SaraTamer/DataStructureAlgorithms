#include <iostream>
#include "Stack.h"
#include "SingleLinkedList.h"


int main() {
    SingleLinkedList<int> intList;
    intList.insertAt(3 , 0);
    intList.insertAt(4 , 0);
    intList.insertAt(2 , 0);

    intList.print();
    return 0;
}
