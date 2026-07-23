/*
==================================================
Problem      : Delete Node in a BST
Platform     : LeetCode 450

Difficulty   : Medium

Pattern      : BST

Time          : O(h)
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
    TreeNode* findMin(TreeNode* root)
    {
        while(root->left)
            root=root->left;
        return root;
    }

public:

    TreeNode* deleteNode(TreeNode* root,int key)
    {
        if(root==NULL)
            return NULL;

        if(key<root->val)
            root->left=deleteNode(root->left,key);

        else if(key>root->val)
            root->right=deleteNode(root->right,key);

        else
        {
            if(root->left==NULL)
            {
                TreeNode* temp=root->right;
                delete root;
                return temp;
            }

            if(root->right==NULL)
            {
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }

            TreeNode* temp=findMin(root->right);

            root->val=temp->val;

            root->right=deleteNode(root->right,temp->val);
        }

        return root;
    }
};

int main()
{
    return 0;
}