/*
==================================================
Problem      : Minimum Element in BST

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

    TreeNode* minimum(TreeNode* root)
    {
        while(root && root->left)
            root=root->left;

        return root;
    }
};

int main()
{
    return 0;
}