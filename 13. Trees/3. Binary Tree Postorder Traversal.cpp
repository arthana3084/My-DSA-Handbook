/*
==================================================
Problem      : Binary Tree Postorder Traversal
Platform     : LeetCode 145
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

    void postorder(TreeNode* root,vector<int>& ans)
    {
        if(root==NULL)
            return;

        postorder(root->left,ans);
        postorder(root->right,ans);
        ans.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root)
    {
        vector<int> ans;
        postorder(root,ans);
        return ans;
    }
};

int main()
{
    return 0;
}