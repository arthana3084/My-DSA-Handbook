/*
==================================================
Problem      : Maximum Element in BST

Pattern       : BST

Time          : O(h)
Space         : O(1)
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

    TreeNode* maximum(TreeNode* root)
    {
        while(root && root->right)
            root=root->right;

        return root;
    }
};

int main()
{
    return 0;
}