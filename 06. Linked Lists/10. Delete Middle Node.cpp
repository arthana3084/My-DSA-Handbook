/*
==================================================
Problem      : Delete the Middle Node of a Linked List
Platform     : LeetCode 2095
Difficulty   : Medium

Pattern      : Slow & Fast Pointer

Time          : O(n)
Space         : O(1)

Key Idea
---------
Find previous of middle using slow-fast pointers.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
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

ListNode* deleteMiddle(ListNode* head)
{
    if(!head || !head->next)
        return NULL;

    ListNode *slow=head,*fast=head,*prev=NULL;

    while(fast && fast->next)
    {
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }

    prev->next=slow->next;

    return head;
}

int main()
{
    cout<<"Refer LeetCode input.";

    return 0;
}
