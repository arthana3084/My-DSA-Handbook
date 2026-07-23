/*
==================================================
Problem      : Boundary Traversal
Platform     : GFG
Difficulty   : Medium

Pattern       : DFS

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

class Solution
{
    bool isLeaf(Node* root)
    {
        return root && !root->left && !root->right;
    }

    void leftBoundary(Node* root,vector<int>& ans)
    {
        Node* cur=root->left;

        while(cur)
        {
            if(!isLeaf(cur))
                ans.push_back(cur->data);

            if(cur->left)
                cur=cur->left;
            else
                cur=cur->right;
        }
    }

    void leaves(Node* root,vector<int>& ans)
    {
        if(root==NULL)
            return;

        if(isLeaf(root))
        {
            ans.push_back(root->data);
            return;
        }

        leaves(root->left,ans);
        leaves(root->right,ans);
    }

    void rightBoundary(Node* root,vector<int>& ans)
    {
        vector<int> temp;

        Node* cur=root->right;

        while(cur)
        {
            if(!isLeaf(cur))
                temp.push_back(cur->data);

            if(cur->right)
                cur=cur->right;
            else
                cur=cur->left;
        }

        reverse(temp.begin(),temp.end());

        ans.insert(ans.end(),temp.begin(),temp.end());
    }

public:

    vector<int> boundaryTraversal(Node* root)
    {
        vector<int> ans;

        if(root==NULL)
            return ans;

        if(!isLeaf(root))
            ans.push_back(root->data);

        leftBoundary(root,ans);
        leaves(root,ans);
        rightBoundary(root,ans);

        return ans;
    }
};

int main()
{
    return 0;
}