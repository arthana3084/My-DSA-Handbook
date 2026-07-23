/*
==================================================
Problem      : Symmetric Tree
Platform     : LeetCode 101
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

    bool mirror(TreeNode* left,TreeNode* right)
    {
        if(left==NULL && right==NULL)
            return true;

        if(left==NULL || right==NULL)
            return false;

        return left->val==right->val &&
               mirror(left->left,right->right) &&
               mirror(left->right,right->left);
    }

    bool isSymmetric(TreeNode* root)
    {
        if(root==NULL)
            return true;

        return mirror(root->left,root->right);
    }
};

int main()
{
    return 0;
}