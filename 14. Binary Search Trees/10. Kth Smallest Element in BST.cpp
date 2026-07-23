/*
==================================================
Problem      : Kth Smallest Element in BST
Platform     : LeetCode 230

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
    int cnt=0;
    int ans=0;

public:

    void inorder(TreeNode* root,int k)
    {
        if(root==NULL)
            return;

        inorder(root->left,k);

        cnt++;

        if(cnt==k)
        {
            ans=root->val;
            return;
        }

        inorder(root->right,k);
    }

    int kthSmallest(TreeNode* root,int k)
    {
        inorder(root,k);
        return ans;
    }
};

int main()
{
    return 0;
}