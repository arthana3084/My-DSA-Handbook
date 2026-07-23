/*
==================================================
Problem      : Serialize and Deserialize Binary Tree

Platform     : LeetCode 297

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

struct TreeNode
{
    int val;
    TreeNode *left,*right;

    TreeNode(int x)
    {
        val=x;
        left=right=NULL;
    }
};

class Codec
{
public:

    string serialize(TreeNode* root)
    {
        if(root==NULL)
            return "";

        string s;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();

            if(node==NULL)
            {
                s+="#,";
                continue;
            }

            s+=to_string(node->val)+",";

            q.push(node->left);
            q.push(node->right);
        }

        return s;
    }

    TreeNode* deserialize(string data)
    {
        if(data.empty())
            return NULL;

        stringstream ss(data);

        string str;

        getline(ss,str,',');

        TreeNode* root=new TreeNode(stoi(str));

        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();

            getline(ss,str,',');

            if(str!="#")
            {
                node->left=new TreeNode(stoi(str));
                q.push(node->left);
            }

            getline(ss,str,',');

            if(str!="#")
            {
                node->right=new TreeNode(stoi(str));
                q.push(node->right);
            }
        }

        return root;
    }
};

int main()
{
    return 0;
}