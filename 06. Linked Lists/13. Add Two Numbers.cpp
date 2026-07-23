/*
==================================================
Problem      : Add Two Numbers
Platform     : LeetCode 2
Difficulty   : Medium

Pattern      : Linked List

Time          : O(max(n,m))
Space         : O(1)

Key Idea
---------
Simulate elementary addition.

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

ListNode* addTwoNumbers(ListNode* l1,ListNode* l2)
{
    ListNode dummy(0);
    ListNode* tail=&dummy;

    int carry=0;

    while(l1||l2||carry)
    {
        int sum=carry;

        if(l1)
        {
            sum+=l1->val;
            l1=l1->next;
        }

        if(l2)
        {
            sum+=l2->val;
            l2=l2->next;
        }

        tail->next=new ListNode(sum%10);
        carry=sum/10;
        tail=tail->next;
    }

    return dummy.next;
}

int main()
{
    cout<<"Refer LeetCode input.";

    return 0;
}
