/*
==================================================
Problem      : Recover Binary Search Tree
Platform     : LeetCode 99

Difficulty   : Medium

Pattern      : Inorder Traversal

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
    TreeNode *first=NULL,*second=NULL,*prev=NULL;

    void inorder(TreeNode* root)
    {
        if(root==NULL)
            return;

        inorder(root->left);

        if(prev && prev->val>root->val)
        {
            if(first==NULL)
                first=prev;

            second=root;
        }

        prev=root;

        inorder(root->right);
    }

public:

    void recoverTree(TreeNode* root)
    {
        inorder(root);
        swap(first->val,second->val);
    }
};

int main()
{
    return 0;
}