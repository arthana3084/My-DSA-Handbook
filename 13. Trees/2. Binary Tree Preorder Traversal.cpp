/*
==================================================
Problem      : Binary Tree Preorder Traversal
Platform     : LeetCode 144
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

    void preorder(TreeNode* root,vector<int>& ans)
    {
        if(root==NULL)
            return;

        ans.push_back(root->val);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }

    vector<int> preorderTraversal(TreeNode* root)
    {
        vector<int> ans;
        preorder(root,ans);
        return ans;
    }
};

int main()
{
    return 0;
}