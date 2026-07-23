/*
==================================================
Problem      : Validate Binary Search Tree
Platform     : LeetCode 98

Difficulty   : Medium

Pattern      : DFS

Time          : O(n)
Space         : O(h)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left,*right;

    TreeNode(int x)
    {
        val=x;
        left=right=NULL;
    }
};

class Solution
{
public:

    bool check(TreeNode* root,long low,long high)
    {
        if(root==NULL)
            return true;

        if(root->val<=low || root->val>=high)
            return false;

        return check(root->left,low,root->val) &&
               check(root->right,root->val,high);
    }

    bool isValidBST(TreeNode* root)
    {
        return check(root,LONG_MIN,LONG_MAX);
    }
};

int main()
{
    return 0;
}