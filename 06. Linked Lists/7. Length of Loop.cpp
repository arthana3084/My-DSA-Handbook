/*
==================================================
Problem      : Find Length of Loop
Platform     : GFG
Difficulty   : Medium

Pattern      : Floyd's Cycle Detection

Time          : O(n)
Space         : O(1)

Key Idea
---------
Count nodes after slow and fast meet.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

int countNodesinLoop(Node *head)
{
    Node *slow=head,*fast=head;

    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
        {
            int cnt=1;

            fast=fast->next;

            while(slow!=fast)
            {
                cnt++;
                fast=fast->next;
            }

            return cnt;
        }
    }

    return 0;
}

int main()
{
    cout<<"Refer GFG for loop creation.";

    return 0;
}
