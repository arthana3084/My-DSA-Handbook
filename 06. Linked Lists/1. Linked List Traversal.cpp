/*
==================================================
Problem      : Linked List Traversal
Platform     : Basic
Difficulty   : Easy

Pattern      : Linked List

Time          : O(n)
Space         : O(1)

Key Idea
---------
Traverse using a temporary pointer.

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

void traverse(Node* head)
{
    Node* temp=head;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);

    traverse(head);

    return 0;
}
