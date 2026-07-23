/*
==================================================
Problem      : Inorder Predecessor in BST
Platform     : GFG

Difficulty   : Medium

Pattern      : BST

Time          : O(h)
Space         : O(1)

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

    Node* inorderPredecessor(Node* root,Node* p)
    {
        Node* ans=NULL;

        while(root)
        {
            if(root->data<p->data)
            {
                ans=root;
                root=root->right;
            }
            else
                root=root->left;
        }

        return ans;
    }
};

int main()
{
    return 0;
}