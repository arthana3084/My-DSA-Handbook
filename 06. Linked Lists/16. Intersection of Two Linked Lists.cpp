/*
==================================================
Problem      : Intersection of Two Linked Lists
Platform     : LeetCode 160
Difficulty   : Easy

Pattern      : Two Pointers

Time          : O(n+m)
Space         : O(1)

Key Idea
---------
Switch heads after reaching the end.

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

ListNode *getIntersectionNode(ListNode *headA,ListNode *headB)
{
    if(!headA || !headB)
        return NULL;

    ListNode *a=headA,*b=headB;

    while(a!=b)
    {
        a=(a)?a->next:headB;
        b=(b)?b->next:headA;
    }

    return a;
}

int main()
{
    cout<<"Refer LeetCode input.";

    return 0;
}
