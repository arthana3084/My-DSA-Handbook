/*
==================================================
Problem      : Root to Node Path
Platform     : GFG

Difficulty   : Medium

Pattern      : DFS + Backtracking

Time          : O(n)
Space         : O(h)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left,*right;

    Node(int x)
    {
        data=x;
        left=right=NULL;
    }
};

class Solution
{
public:

    bool solve(Node* root,int x,vector<int>& ans)
    {
        if(root==NULL)
            return false;

        ans.push_back(root->data);

        if(root->data==x)
            return true;

        if(solve(root->left,x,ans) ||
           solve(root->right,x,ans))
            return true;

        ans.pop_back();

        return false;
    }

    vector<int> path(Node* root,int x)
    {
        vector<int> ans;

        solve(root,x,ans);

        return ans;
    }
};

int main()
{
    return 0;
}