/*
==================================================
Problem      : Minimum Time to Burn Binary Tree
Platform     : GFG

Difficulty   : Hard

Pattern      : BFS

Time          : O(n)
Space         : O(n)

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

class Solution
{
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

    Node* findNode(Node* root,int target)
    {
        if(root==NULL)
            return NULL;

        if(root->data==target)
            return root;

        Node* left=findNode(root->left,target);
        if(left) return left;

        return findNode(root->right,target);
    }

public:

    int minTime(Node* root,int target)
    {
        markParents(root);

        Node* start=findNode(root,target);

        unordered_map<Node*,bool> vis;
        queue<Node*> q;

        q.push(start);
        vis[start]=true;

        int time=-1;

        while(!q.empty())
        {
            int size=q.size();

            time++;

            while(size--)
            {
                Node* node=q.front();
                q.pop();

                if(node->left && !vis[node->left])
                {
                    vis[node->left]=true;
                    q.push(node->left);
                }

                if(node->right && !vis[node->right])
                {
                    vis[node->right]=true;
                    q.push(node->right);
                }

                if(parent[node] && !vis[parent[node]])
                {
                    vis[parent[node]]=true;
                    q.push(parent[node]);
                }
            }
        }

        return time;
    }
};

int main()
{
    return 0;
}