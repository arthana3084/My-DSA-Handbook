/*
==================================================
Problem      : Burn Binary Tree
Platform     : GFG

Difficulty   : Medium

Pattern      : BFS

Time          : O(n)
Space         : O(n)

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

    unordered_map<Node*,Node*> parent;

    void markParents(Node* root)
    {
        queue<Node*> q;
        q.push(root);

        while(!q.empty())
        {
            Node* node=q.front();
            q.pop();

            if(node->left)
            {
                parent[node->left]=node;
                q.push(node->left);
            }

            if(node->right)
            {
                parent[node->right]=node;
                q.push(node->right);
            }
        }
    }
};

int main()
{
    return 0;
}