/*
==================================================
Problem      : Merge Two Sorted Lists
Platform     : LeetCode 21
Difficulty   : Easy

Pattern      : Linked List

Time          : O(n+m)
Space         : O(1)

Key Idea
---------
Merge exactly like merge step of Merge Sort.

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

ListNode* mergeTwoLists(ListNode* list1,ListNode* list2)
{
    ListNode dummy(0);

    ListNode* tail=&dummy;

    while(list1 && list2)
    {
        if(list1->val<list2->val)
        {
            tail->next=list1;
            list1=list1->next;
        }
        else
        {
            tail->next=list2;
            list2=list2->next;
        }

        tail=tail->next;
    }

    tail->next=list1?list1:list2;

    return dummy.next;
}

int main()
{
    cout<<"Refer LeetCode input.";

    return 0;
}
