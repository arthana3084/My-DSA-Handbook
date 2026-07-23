/*
==================================================
Problem      : Construct Binary Tree from
               Preorder and Inorder

Platform     : LeetCode 105

Difficulty   : Medium

Pattern      : DFS

Time          : O(n)
Space         : O(n)

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
    unordered_map<int,int> mp;

public:

    TreeNode* build(vector<int>& pre,int ps,int pe,
                    vector<int>& in,int is,int ie)
    {
        if(ps>pe || is>ie)
            return NULL;

        TreeNode* root=new TreeNode(pre[ps]);

        int idx=mp[root->val];

        int left=idx-is;

        root->left=build(pre,ps+1,ps+left,
                         in,is,idx-1);

        root->right=build(pre,ps+left+1,pe,
                          in,idx+1,ie);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder,
                        vector<int>& inorder)
    {
        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;

        return build(preorder,0,preorder.size()-1,
                     inorder,0,inorder.size()-1);
    }
};

int main()
{
    return 0;
}