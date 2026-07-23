/*
==================================================
Problem      : Lowest Common Ancestor of Binary Tree
Platform     : LeetCode 236

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

    TreeNode* lowestCommonAncestor(TreeNode* root,
                                   TreeNode* p,
                                   TreeNode* q)
    {
        if(root==NULL || root==p || root==q)
            return root;

        TreeNode* left=lowestCommonAncestor(root->left,p,q);
        TreeNode* right=lowestCommonAncestor(root->right,p,q);

        if(left==NULL)
            return right;

        if(right==NULL)
            return left;

        return root;
    }
};

int main()
{
    return 0;
}