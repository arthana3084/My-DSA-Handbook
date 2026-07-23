/*
==================================================
Problem      : Reverse Linked List
Platform     : LeetCode 206
Difficulty   : Easy

Pattern      : Iterative

Time          : O(n)
Space         : O(1)

Key Idea
---------
Reverse links using three pointers.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;

    ListNode(int x)
    {
        val=x;
        next=NULL;
    }
};

ListNode* reverseList(ListNode* head)
{
    ListNode* prev=NULL;
    ListNode* curr=head;

    while(curr)
    {
        ListNode* next=curr->next;

        curr->next=prev;

        prev=curr;
        curr=next;
    }

    return prev;
}

int main()
{
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);

    head=reverseList(head);

    while(head)
    {
        cout<<head->val<<" ";
        head=head->next;
    }

    return 0;
}
