/*
==================================================
Problem      : Palindrome Linked List
Platform     : LeetCode 234
Difficulty   : Easy

Pattern      : Slow Fast Pointer

Time          : O(n)
Space         : O(1)

Key Idea
---------
Reverse second half and compare.

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

ListNode* reverse(ListNode* head)
{
    ListNode *prev=NULL;

    while(head)
    {
        ListNode* next=head->next;
        head->next=prev;
        prev=head;
        head=next;
    }

    return prev;
}

bool isPalindrome(ListNode* head)
{
    ListNode *slow=head,*fast=head;

    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    slow=reverse(slow);

    while(slow)
    {
        if(head->val!=slow->val)
            return false;

        head=head->next;
        slow=slow->next;
    }

    return true;
}

int main()
{
    cout<<"Refer LeetCode input.";

    return 0;
}
