/*
==================================================
Problem      : Same Tree
Platform     : LeetCode 100
Difficulty   : Easy

Pattern       : DFS

Time          : O(n)
Space         : O(h)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
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

    bool isSameTree(TreeNode* p,TreeNode* q)
    {
        if(p==NULL && q==NULL)
            return true;

        if(p==NULL || q==NULL)
            return false;

        if(p->val!=q->val)
            return false;

        return isSameTree(p->left,q->left) &&
               isSameTree(p->right,q->right);
    }
};

int main()
{
    return 0;
}