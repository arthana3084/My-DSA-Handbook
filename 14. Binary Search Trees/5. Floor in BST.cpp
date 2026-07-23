/*
==================================================
Problem      : Floor in BST
Platform     : GFG

Pattern       : BST

Time          : O(h)
Space         : O(1)
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

    int floor(Node* root,int key)
    {
        int ans=-1;

        while(root)
        {
            if(root->data==key)
                return key;

            if(root->data>key)
                root=root->left;
            else
            {
                ans=root->data;
                root=root->right;
            }
        }

        return ans;
    }
};

int main()
{
    return 0;
}