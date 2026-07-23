/*
==================================================
Problem      : Odd Even Linked List
Platform     : LeetCode 328
Difficulty   : Medium

Pattern      : Linked List

Time          : O(n)
Space         : O(1)

Key Idea
---------
Separate odd and even positions.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
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

ListNode* oddEvenList(ListNode* head)
{
    if(!head || !head->next)
        return head;

    ListNode* odd=head;
    ListNode* even=head->next;
    ListNode* evenHead=even;

    while(even && even->next)
    {
        odd->next=even->next;
        odd=odd->next;

        even->next=odd->next;
        even=even->next;
    }

    odd->next=evenHead;

    return head;
}

int main()
{
    cout<<"Refer LeetCode input.";

    return 0;
}
