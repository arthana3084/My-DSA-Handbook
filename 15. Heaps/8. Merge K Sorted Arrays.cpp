/*
==================================================
Problem      : Merge K Sorted Arrays
Platform     : GFG

Difficulty   : Medium

Pattern      : Min Heap

Time          : O(nk log k)
Space         : O(k)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val,row,col;

    Node(int v,int r,int c)
    {
        val=v;
        row=r;
        col=c;
    }
};

class cmp
{
public:
    bool operator()(Node* a,Node* b)
    {
        return a->val>b->val;
    }
};

class Solution
{
public:

    vector<int> mergeKArrays(vector<vector<int>> arr,int K)
    {
        priority_queue<Node*,vector<Node*>,cmp> pq;

        for(int i=0;i<K;i++)
            pq.push(new Node(arr[i][0],i,0));

        vector<int> ans;

        while(!pq.empty())
        {
            Node* cur=pq.top();
            pq.pop();

            ans.push_back(cur->val);

            if(cur->col+1<arr[cur->row].size())
            {
                pq.push(new Node(
                    arr[cur->row][cur->col+1],
                    cur->row,
                    cur->col+1
                ));
            }
        }

        return ans;
    }
};

int main()
{
    return 0;
}