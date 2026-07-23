/*
==================================================
Problem      : Merge K Sorted Lists
Platform     : LeetCode 23

Difficulty   : Hard

Pattern      : Min Heap

Time          : O(n log k)
Space         : O(k)

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

class cmp
{
public:
    bool operator()(ListNode* a,ListNode* b)
    {
        return a->val>b->val;
    }
};

class Solution
{
public:

    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        priority_queue<ListNode*,vector<ListNode*>,cmp> pq;

        for(auto node:lists)
            if(node)
                pq.push(node);

        ListNode dummy(0);
        ListNode* tail=&dummy;

        while(!pq.empty())
        {
            ListNode* cur=pq.top();
            pq.pop();

            tail->next=cur;
            tail=tail->next;

            if(cur->next)
                pq.push(cur->next);
        }

        return dummy.next;
    }
};

int main()
{
    return 0;
}