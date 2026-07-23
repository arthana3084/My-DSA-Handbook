/*
==================================================
Problem      : Construct Binary Tree from
               Inorder and Postorder

Platform     : LeetCode 106

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

    TreeNode* build(vector<int>& in,int is,int ie,
                    vector<int>& post,int ps,int pe)
    {
        if(is>ie || ps>pe)
            return NULL;

        TreeNode* root=new TreeNode(post[pe]);

        int idx=mp[root->val];

        int left=idx-is;

        root->left=build(in,is,idx-1,
                         post,ps,ps+left-1);

        root->right=build(in,idx+1,ie,
                          post,ps+left,pe-1);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder,
                        vector<int>& postorder)
    {
        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;

        return build(inorder,0,inorder.size()-1,
                     postorder,0,postorder.size()-1);
    }
};

int main()
{
    return 0;
}