/*
==================================================
Problem      : Linked List Cycle
Platform     : LeetCode 141
Difficulty   : Easy

Pattern      : Floyd's Cycle Detection

Time          : O(n)
Space         : O(1)

Key Idea
---------
Slow moves one step, fast moves two.

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

bool hasCycle(ListNode *head)
{
    ListNode* slow=head;
    ListNode* fast=head;

    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
            return true;
    }

    return false;
}

int main()
{
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);

    cout<<hasCycle(head);

    return 0;
}
