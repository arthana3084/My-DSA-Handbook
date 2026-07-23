/*
==================================================
Problem      : Balanced Binary Tree
Platform     : LeetCode 110
Difficulty   : Easy

Pattern       : DFS

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

    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;

        int lh=height(root->left);
        if(lh==-1)
            return -1;

        int rh=height(root->right);
        if(rh==-1)
            return -1;

        if(abs(lh-rh)>1)
            return -1;

        return 1+max(lh,rh);
    }

    bool isBalanced(TreeNode* root)
    {
        return height(root)!=-1;
    }
};

int main()
{
    return 0;
}