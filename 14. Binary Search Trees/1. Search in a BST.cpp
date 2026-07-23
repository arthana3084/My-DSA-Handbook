/*
==================================================
Problem      : Search in a Binary Search Tree
Platform     : LeetCode 700
Difficulty   : Easy

Pattern       : BST

Time          : O(h)
Space         : O(1)

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

    TreeNode* searchBST(TreeNode* root,int val)
    {
        while(root)
        {
            if(root->val==val)
                return root;

            if(val<root->val)
                root=root->left;
            else
                root=root->right;
        }

        return NULL;
    }
};

int main()
{
    return 0;
}