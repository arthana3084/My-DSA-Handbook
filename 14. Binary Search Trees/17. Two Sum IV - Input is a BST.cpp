/*
==================================================
Problem      : Two Sum IV - Input is a BST
Platform     : LeetCode 653

Difficulty   : Easy

Pattern      : DFS + Hash Set

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
    unordered_set<int> st;

public:

    bool findTarget(TreeNode* root,int k)
    {
        if(root==NULL)
            return false;

        if(st.count(k-root->val))
            return true;

        st.insert(root->val);

        return findTarget(root->left,k) ||
               findTarget(root->right,k);
    }
};

int main()
{
    return 0;
}