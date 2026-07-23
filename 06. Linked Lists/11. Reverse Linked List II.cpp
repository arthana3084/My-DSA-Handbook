/*
==================================================
Problem      : Reverse Linked List II
Platform     : LeetCode 92
Difficulty   : Medium

Pattern      : Linked List

Time          : O(n)
Space         : O(1)

Key Idea
---------
Reverse only the given portion of the list.

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

ListNode* reverseBetween(ListNode* head,int left,int right)
{
    if(!head || left==right)
        return head;

    ListNode dummy(0);
    dummy.next=head;

    ListNode* prev=&dummy;

    for(int i=1;i<left;i++)
        prev=prev->next;

    ListNode* curr=prev->next;

    for(int i=0;i<right-left;i++)
    {
        ListNode* temp=curr->next;
        curr->next=temp->next;
        temp->next=prev->next;
        prev->next=temp;
    }

    return dummy.next;
}

int main()
{
    cout<<"Refer LeetCode input.";

    return 0;
}
