/*
==================================================
Problem      : Flatten Binary Tree to Linked List
Platform     : LeetCode 114

Difficulty   : Medium

Pattern      : Reverse Preorder

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
    TreeNode* prev=NULL;

public:

    void flatten(TreeNode* root)
    {
        if(root==NULL)
            return;

        flatten(root->right);
        flatten(root->left);

        root->right=prev;
        root->left=NULL;
        prev=root;
    }
};

int main()
{
    return 0;
}