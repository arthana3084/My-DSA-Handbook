/*
==================================================
Problem      : Copy List with Random Pointer
Platform     : LeetCode 138
Difficulty   : Medium

Pattern      : Linked List

Time          : O(n)
Space         : O(1)

Key Idea
---------
Interleave copied nodes.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
    Node* random;

    Node(int x)
    {
        val=x;
        next=random=NULL;
    }
};

Node* copyRandomList(Node* head)
{
    if(!head)
        return NULL;

    Node* temp=head;

    while(temp)
    {
        Node* copy=new Node(temp->val);

        copy->next=temp->next;
        temp->next=copy;
        temp=copy->next;
    }

    temp=head;

    while(temp)
    {
        if(temp->random)
            temp->next->random=temp->random->next;

        temp=temp->next->next;
    }

    Node* dummy=new Node(0);
    Node* copy=dummy;

    temp=head;

    while(temp)
    {
        copy->next=temp->next;

        temp->next=temp->next->next;

        copy=copy->next;
        temp=temp->next;
    }

    return dummy->next;
}

int main()
{
    cout<<"Refer LeetCode input.";

    return 0;
}
