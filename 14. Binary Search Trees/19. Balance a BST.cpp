/*
==================================================
Problem      : Balance a Binary Search Tree
Platform     : LeetCode 1382

Difficulty   : Medium

Pattern      : Inorder + Divide & Conquer

Time          : O(n)
Space         : O(n)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
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
    vector<int> inorder;

    void dfs(TreeNode* root)
    {
        if(root==NULL)
            return;

        dfs(root->left);
        inorder.push_back(root->val);
        dfs(root->right);
    }

    TreeNode* build(int l,int r)
    {
        if(l>r)
            return NULL;

        int mid=(l+r)/2;

        TreeNode* root=new TreeNode(inorder[mid]);

        root->left=build(l,mid-1);
        root->right=build(mid+1,r);

        return root;
    }

public:

    TreeNode* balanceBST(TreeNode* root)
    {
        dfs(root);

        return build(0,inorder.size()-1);
    }
};

int main()
{
    return 0;
}