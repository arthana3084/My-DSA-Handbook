/*
==================================================
Problem      : Middle of Linked List
Platform     : LeetCode 876
Difficulty   : Easy

Pattern      : Slow & Fast Pointer

Time          : O(n)
Space         : O(1)

Key Idea
---------
Fast moves twice as fast as slow.

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

ListNode* middleNode(ListNode* head)
{
    ListNode* slow=head;
    ListNode* fast=head;

    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}

int main()
{
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);

    cout<<middleNode(head)->val;

    return 0;
}
