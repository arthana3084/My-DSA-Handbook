/*
==================================================
Problem      : Design Circular Queue
Platform     : LeetCode 622
Difficulty   : Medium

Pattern      : Queue

Time          : O(1)
Space         : O(k)

Key Idea
---------
Use circular indexing with modulo.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class MyCircularQueue
{
    vector<int> q;
    int front,rear,cnt,size;

public:

    MyCircularQueue(int k)
    {
        q.resize(k);
        size=k;
        front=0;
        rear=-1;
        cnt=0;
    }

    bool enQueue(int value)
    {
        if(isFull())
            return false;

        rear=(rear+1)%size;
        q[rear]=value;
        cnt++;

        return true;
    }

    bool deQueue()
    {
        if(isEmpty())
            return false;

        front=(front+1)%size;
        cnt--;

        return true;
    }

    int Front()
    {
        return isEmpty()?-1:q[front];
    }

    int Rear()
    {
        return isEmpty()?-1:q[rear];
    }

    bool isEmpty()
    {
        return cnt==0;
    }

    bool isFull()
    {
        return cnt==size;
    }
};

int main()
{
    MyCircularQueue q(3);

    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);

    cout<<q.Rear();

    return 0;
}
