/*
==================================================
Problem      : Implement Queue using Array
Platform     : Basic
Difficulty   : Easy

Pattern      : Queue

Time          : O(1)
Space         : O(n)

Key Idea
---------
Use front and rear pointers.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Queue
{
    int arr[1000];
    int front,rear;

public:
    Queue()
    {
        front=0;
        rear=-1;
    }

    void push(int x)
    {
        arr[++rear]=x;
    }

    void pop()
    {
        if(front<=rear)
            front++;
    }

    int Front()
    {
        return arr[front];
    }

    bool empty()
    {
        return front>rear;
    }
};

int main()
{
    Queue q;

    q.push(5);
    q.push(10);

    cout<<q.Front();

    return 0;
}
