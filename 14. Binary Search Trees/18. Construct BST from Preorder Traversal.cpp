/*
==================================================
Problem      : Construct BST from Preorder
Platform     : LeetCode 1008

Difficulty   : Medium

Pattern      : Recursion + Bounds

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
    int idx=0;

    TreeNode* build(vector<int>& preorder,int bound)
    {
        if(idx==preorder.size() || preorder[idx]>bound)
            return NULL;

        TreeNode* root=new TreeNode(preorder[idx++]);

        root->left=build(preorder,root->val);
        root->right=build(preorder,bound);

        return root;
    }

public:

    TreeNode* bstFromPreorder(vector<int>& preorder)
    {
        return build(preorder,INT_MAX);
    }
};

int main()
{
    return 0;
}