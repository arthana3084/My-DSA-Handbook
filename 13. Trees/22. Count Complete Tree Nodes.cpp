/*
==================================================
Problem      : Count Complete Tree Nodes
Platform     : LeetCode 222

Difficulty   : Medium

Pattern      : Complete Binary Tree

Time          : O(log² n)
Space         : O(log n)

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

    int leftHeight(TreeNode* root)
    {
        int h=0;

        while(root)
        {
            h++;
            root=root->left;
        }

        return h;
    }

    int rightHeight(TreeNode* root)
    {
        int h=0;

        while(root)
        {
            h++;
            root=root->right;
        }

        return h;
    }

    int countNodes(TreeNode* root)
    {
        if(root==NULL)
            return 0;

        int lh=leftHeight(root);
        int rh=rightHeight(root);

        if(lh==rh)
            return (1<<lh)-1;

        return 1+countNodes(root->left)+countNodes(root->right);
    }
};

int main()
{
    return 0;
}