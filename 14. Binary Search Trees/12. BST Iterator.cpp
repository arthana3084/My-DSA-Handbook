/*
==================================================
Problem      : Binary Search Tree Iterator
Platform     : LeetCode 173

Difficulty   : Medium

Pattern      : Stack

Time          : O(1) amortized
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

class BSTIterator
{
    stack<TreeNode*> st;

    void pushAll(TreeNode* root)
    {
        while(root)
        {
            st.push(root);
            root=root->left;
        }
    }

public:

    BSTIterator(TreeNode* root)
    {
        pushAll(root);
    }

    int next()
    {
        TreeNode* node=st.top();
        st.pop();

        pushAll(node->right);

        return node->val;
    }

    bool hasNext()
    {
        return !st.empty();
    }
};

int main()
{
    return 0;
}