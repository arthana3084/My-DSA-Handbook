/*
==================================================
Problem      : Sort List
Platform     : LeetCode 148
Difficulty   : Medium

Pattern      : Merge Sort

Time          : O(n log n)
Space         : O(log n)

Key Idea
---------
Apply Merge Sort on linked list.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x)
    {
        val=x;
        next=NULL;
    }
};

ListNode* merge(ListNode* a,ListNode* b)
{
    ListNode dummy(0);
    ListNode* tail=&dummy;

    while(a && b)
    {
        if(a->val<b->val)
        {
            tail->next=a;
            a=a->next;
        }
        else
        {
            tail->next=b;
            b=b->next;
        }

        tail=tail->next;
    }

    tail->next=a?a:b;

    return dummy.next;
}

ListNode* sortList(ListNode* head)
{
    if(!head || !head->next)
        return head;

    ListNode *slow=head,*fast=head->next;

    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    ListNode* mid=slow->next;
    slow->next=NULL;

    ListNode* left=sortList(head);
    ListNode* right=sortList(mid);

    return merge(left,right);
}

int main()
{
    cout<<"Refer LeetCode input.";

    return 0;
}
