/*
==================================================
Problem      : Diameter of Binary Tree
Platform     : LeetCode 543
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

    int diameter=0;

    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;

        int lh=height(root->left);
        int rh=height(root->right);

        diameter=max(diameter,lh+rh);

        return 1+max(lh,rh);
    }

    int diameterOfBinaryTree(TreeNode* root)
    {
        height(root);
        return diameter;
    }
};

int main()
{
    return 0;
}