/*
==================================================
Problem      : Search in Linked List
Platform     : Basic
Difficulty   : Easy

Pattern      : Linked List

Time          : O(n)
Space         : O(1)

Key Idea
---------
Traverse until key is found.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

bool search(Node* head,int key)
{
    while(head)
    {
        if(head->data==key)
            return true;

        head=head->next;
    }

    return false;
}

int main()
{
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);

    cout<<search(head,20);

    return 0;
}
