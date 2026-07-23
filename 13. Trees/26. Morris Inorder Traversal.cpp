/*
==================================================
Problem      : Morris Inorder Traversal
Platform     : GFG

Difficulty   : Medium

Pattern      : Morris Traversal

Time          : O(n)
Space         : O(1)

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
    vector<int> inorderTraversal(TreeNode* root)
    {
        vector<int> ans;

        TreeNode* cur=root;

        while(cur)
        {
            if(cur->left==NULL)
            {
                ans.push_back(cur->val);
                cur=cur->right;
            }
            else
            {
                TreeNode* prev=cur->left;

                while(prev->right && prev->right!=cur)
                    prev=prev->right;

                if(prev->right==NULL)
                {
                    prev->right=cur;
                    cur=cur->left;
                }
                else
                {
                    prev->right=NULL;
                    ans.push_back(cur->val);
                    cur=cur->right;
                }
            }
        }

        return ans;
    }
};

int main()
{
    return 0;
}