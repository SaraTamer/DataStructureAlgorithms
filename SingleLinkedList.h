
#ifndef DATASTRUCTUREALGORITHMS_SINGLELINKEDLIST_H
#define DATASTRUCTUREALGORITHMS_SINGLELINKEDLIST_H


#include <iostream>

#define ll long long

using namespace std;



template <class T>
class SingleLinkedList{
private:
    struct Node{
        Node* next;
        T value;
        Node()
        {
            value = 0;
            next = nullptr;
        }
    };
    Node *head = new Node();
    Node *tail = new Node();
    ll sz;

public:
    SingleLinkedList():sz(0)
    {
        head = nullptr;
        tail = nullptr;
    }
    void insertFirst(T item)
    {
        Node* tmp = new Node;
        tmp->value = item;
        if(sz == 0)
        {
            tail = head = tmp;
            tmp->next = nullptr;
        }
        else
        {
            tmp->next = head;
            head = tmp;
        }
        sz++;

    }
    void insertLast(T item)
    {
        Node* tmp = new Node;
        tmp->value = item;
        if(sz == 0) {
            head = tail = tmp;
        }
        else {
            tail->next = tmp;
            tail = tmp;
        }

        tmp->next = nullptr;
        sz++;
    }
    void insertAt(T item , ll index)
    {
        if(index > sz || index < 0)
        {
            cout << "Position out of scope!\n";
            return;
        }
        if(index == 0)
        {
            insertFirst(item);
        }
        else if(index == sz)
        {
            insertLast(item);
        }
        else
        {
            Node* tmp = head;
            Node* newNode = new Node;
            newNode->value = item;
            for(ll i = 0; i < index - 1; i++)
            {
                tmp = tmp->next;
            }
            newNode->next = tmp->next;
            tmp->next = newNode;
            sz++;
        }
    }
    bool isEmpty()
    {
        return (head == nullptr);
    }
    void print()
    {
        Node* tmp = head;
        for(ll i = 0; i < sz; i++)
        {
            cout << tmp->value << ' ';
            tmp = tmp->next;
        }
    }
};


#endif //DATASTRUCTUREALGORITHMS_SINGLELINKEDLIST_H
