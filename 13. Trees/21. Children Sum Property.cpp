/*
==================================================
Problem      : Children Sum Property
Platform     : GFG

Difficulty   : Medium

Pattern      : DFS

Time          : O(n)
Space         : O(h)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left,*right;

    Node(int x)
    {
        data=x;
        left=right=NULL;
    }
};

class Solution
{
public:

    void changeTree(Node *root)
    {
        if(root==NULL)
            return;

        int child=0;

        if(root->left)
            child+=root->left->data;

        if(root->right)
            child+=root->right->data;

        if(child>=root->data)
            root->data=child;
        else
        {
            if(root->left)
                root->left->data=root->data;

            if(root->right)
                root->right->data=root->data;
        }

        changeTree(root->left);
        changeTree(root->right);

        int total=0;

        if(root->left)
            total+=root->left->data;

        if(root->right)
            total+=root->right->data;

        if(root->left || root->right)
            root->data=total;
    }
};

int main()
{
    return 0;
}