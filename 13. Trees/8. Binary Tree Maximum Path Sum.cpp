/*
==================================================
Problem      : Binary Tree Maximum Path Sum
Platform     : LeetCode 124
Difficulty   : Hard

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

    int ans=INT_MIN;

    int dfs(TreeNode* root)
    {
        if(root==NULL)
            return 0;

        int left=max(0,dfs(root->left));
        int right=max(0,dfs(root->right));

        ans=max(ans,left+right+root->val);

        return root->val+max(left,right);
    }

    int maxPathSum(TreeNode* root)
    {
        dfs(root);
        return ans;
    }
};

int main()
{
    return 0;
}