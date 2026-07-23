/*
==================================================
Problem      : Binary Tree Inorder Traversal
Platform     : LeetCode 94
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

    void inorder(TreeNode* root,vector<int>& ans)
    {
        if(root==NULL)
            return;

        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }

    vector<int> inorderTraversal(TreeNode* root)
    {
        vector<int> ans;
        inorder(root,ans);
        return ans;
    }
};

int main()
{
    return 0;
}