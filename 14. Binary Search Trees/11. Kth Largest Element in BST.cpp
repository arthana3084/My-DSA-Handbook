/*
==================================================
Problem      : Kth Largest Element in BST
Platform     : GFG

Difficulty   : Medium

Pattern      : Reverse Inorder Traversal

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
    int cnt=0,ans=-1;

public:

    void reverseInorder(Node* root,int k)
    {
        if(root==NULL)
            return;

        reverseInorder(root->right,k);

        cnt++;

        if(cnt==k)
        {
            ans=root->data;
            return;
        }

        reverseInorder(root->left,k);
    }

    int kthLargest(Node *root,int K)
    {
        reverseInorder(root,K);
        return ans;
    }
};

int main()
{
    return 0;
}