/*
==================================================
Problem      : Remove Nth Node From End
Platform     : LeetCode 19
Difficulty   : Medium

Pattern      : Two Pointers

Time          : O(n)
Space         : O(1)

Key Idea
---------
Maintain n-node gap.

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

ListNode* removeNthFromEnd(ListNode* head,int n)
{
    ListNode dummy(0);

    dummy.next=head;

    ListNode *fast=&dummy,*slow=&dummy;

    for(int i=0;i<n;i++)
        fast=fast->next;

    while(fast->next)
    {
        fast=fast->next;
        slow=slow->next;
    }

    slow->next=slow->next->next;

    return dummy.next;
}

int main()
{
    cout<<"Refer LeetCode input.";

    return 0;
}
