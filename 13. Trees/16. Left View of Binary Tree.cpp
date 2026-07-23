/*
==================================================
Problem      : Left View of Binary Tree
Platform     : GFG
Difficulty   : Easy

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
public:

    vector<int> leftView(Node *root)
    {
        vector<int> ans;

        if(root==NULL)
            return ans;

        queue<Node*> q;
        q.push(root);

        while(!q.empty())
        {
            int size=q.size();

            for(int i=0;i<size;i++)
            {
                Node* node=q.front();
                q.pop();

                if(i==0)
                    ans.push_back(node->data);

                if(node->left)
                    q.push(node->left);

                if(node->right)
                    q.push(node->right);
            }
        }

        return ans;
    }
};

int main()
{
    return 0;
}