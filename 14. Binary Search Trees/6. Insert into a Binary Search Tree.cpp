/*
==================================================
Problem      : Insert into a Binary Search Tree
Platform     : LeetCode 701

Difficulty   : Medium

Pattern      : BST

Time          : O(h)
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

    TreeNode* insertIntoBST(TreeNode* root,int val)
    {
        if(root==NULL)
            return new TreeNode(val);

        if(val<root->val)
            root->left=insertIntoBST(root->left,val);
        else
            root->right=insertIntoBST(root->right,val);

        return root;
    }
};

int main()
{
    return 0;
}