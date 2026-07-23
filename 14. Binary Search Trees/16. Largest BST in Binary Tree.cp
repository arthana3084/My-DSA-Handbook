/*
==================================================
Problem      : Largest BST in Binary Tree
Platform     : GFG

Difficulty   : Hard

Pattern      : Postorder DFS

Time          : O(n)
Space         : O(h)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
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

class NodeValue
{
public:
    int minNode,maxNode,maxSize;

    NodeValue(int minNode,int maxNode,int maxSize)
    {
        this->minNode=minNode;
        this->maxNode=maxNode;
        this->maxSize=maxSize;
    }
};

class Solution
{
    NodeValue solve(Node* root)
    {
        if(root==NULL)
            return NodeValue(INT_MAX,INT_MIN,0);

        auto left=solve(root->left);
        auto right=solve(root->right);

        if(root->data>left.maxNode && root->data<right.minNode)
        {
            return NodeValue(
                min(root->data,left.minNode),
                max(root->data,right.maxNode),
                left.maxSize+right.maxSize+1
            );
        }

        return NodeValue(INT_MIN,INT_MAX,
                         max(left.maxSize,right.maxSize));
    }

public:

    int largestBst(Node *root)
    {
        return solve(root).maxSize;
    }
};

int main()
{
    return 0;
}