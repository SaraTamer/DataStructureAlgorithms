
#ifndef DATASTRUCTUREALGORITHMS_QUEUE_H
#define DATASTRUCTUREALGORITHMS_QUEUE_H

#include <iostream>

#define ll long long

using namespace std;



template <class T>
class CircularQueue{
private:
    ll sz;
    ll maxSz;
    ll front;
    ll rear;
    T* arr;
public:
    CircularQueue():sz(0), maxSz(100), front(0) , rear(99)
    {
        arr = new T[maxSz];
    }
    CircularQueue(ll maxS):sz(0), maxSz(maxS), front(0) , rear(maxS - 1)
    {
        if(maxS < 0)
        {
            maxSz = 100;
            rear = maxSz - 1;
        }
        arr = new T[maxSz];
    }
    void enqueue(T item)
    {
        if(isFull())
        {
            cout << "The queue is FULL!\n";
            return;
        }
        arr[sz] = item;
        rear = (rear + 1) % maxSz;
        sz++;
    }
    void dequeue()
    {
        if(isEmpty())
        {
            cout << "The queue is EMPTY!\n";
            return;
        }
        front = (front + 1) % maxSz;
        sz--;
    }
    void print()
    {
        for(ll i = front; i != (rear + 1) % maxSz; i = (i+1) % maxSz)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }
    void clear(){sz = 0;}
    ll size(){return sz;}
    T first(){return arr[front];}
    bool isEmpty(){return (sz == 0);}
    bool isFull(){return (sz == maxSz);}
    ~CircularQueue(){delete[] arr;}
};

#endif //DATASTRUCTUREALGORITHMS_QUEUE_H
