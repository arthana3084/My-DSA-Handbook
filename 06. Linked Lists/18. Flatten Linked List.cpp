/*
==================================================
Problem      : Flatten a Linked List
Platform     : GFG
Difficulty   : Hard

Pattern      : Merge Lists

Time          : O(n²)
Space         : O(1)

Key Idea
---------
Merge bottom linked lists recursively.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next,*bottom;

    Node(int x)
    {
        data=x;
        next=bottom=NULL;
    }
};

Node* merge(Node* a,Node* b)
{
    if(!a) return b;
    if(!b) return a;

    Node* res;

    if(a->data<b->data)
    {
        res=a;
        res->bottom=merge(a->bottom,b);
    }
    else
    {
        res=b;
        res->bottom=merge(a,b->bottom);
    }

    res->next=NULL;

    return res;
}

Node* flatten(Node* root)
{
    if(!root || !root->next)
        return root;

    root->next=flatten(root->next);

    return merge(root,root->next);
}

int main()
{
    cout<<"Refer GFG input.";

    return 0;
}
