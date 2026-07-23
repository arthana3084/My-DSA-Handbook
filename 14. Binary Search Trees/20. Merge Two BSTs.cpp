/*
==================================================
Problem      : Merge Two BSTs
Platform     : GFG

Difficulty   : Medium

Pattern      : Inorder Traversal

Time          : O(n+m)
Space         : O(n+m)

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
    void inorder(Node* root,vector<int>& ans)
    {
        if(root==NULL)
            return;

        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }

public:

    vector<int> merge(Node *root1,Node *root2)
    {
        vector<int> a,b,ans;

        inorder(root1,a);
        inorder(root2,b);

        int i=0,j=0;

        while(i<a.size() && j<b.size())
        {
            if(a[i]<b[j])
                ans.push_back(a[i++]);
            else
                ans.push_back(b[j++]);
        }

        while(i<a.size())
            ans.push_back(a[i++]);

        while(j<b.size())
            ans.push_back(b[j++]);

        return ans;
    }
};

int main()
{
    return 0;
}