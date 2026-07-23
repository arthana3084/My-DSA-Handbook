/*
==================================================
Problem      : Reverse Nodes in K Group
Platform     : LeetCode 25
Difficulty   : Hard

Pattern      : Linked List

Time          : O(n)
Space         : O(1)

Key Idea
---------
Reverse every group of k nodes.

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

ListNode* getKth(ListNode* curr,int k)
{
    while(curr && k--)
        curr=curr->next;
    return curr;
}

ListNode* reverseKGroup(ListNode* head,int k)
{
    ListNode dummy(0);
    dummy.next=head;

    ListNode* groupPrev=&dummy;

    while(true)
    {
        ListNode* kth=getKth(groupPrev,k);

        if(!kth)
            break;

        ListNode* groupNext=kth->next;

        ListNode* prev=groupNext;
        ListNode* curr=groupPrev->next;

        while(curr!=groupNext)
        {
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }

        ListNode* temp=groupPrev->next;
        groupPrev->next=kth;
        groupPrev=temp;
    }

    return dummy.next;
}

int main()
{
    cout<<"Refer LeetCode input.";

    return 0;
}
