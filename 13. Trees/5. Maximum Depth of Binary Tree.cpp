/*
==================================================
Problem      : Maximum Depth of Binary Tree
Platform     : LeetCode 104
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

    int maxDepth(TreeNode* root)
    {
        if(root==NULL)
            return 0;

        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
};

int main()
{
    return 0;
}