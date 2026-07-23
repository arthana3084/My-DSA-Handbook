/*
==================================================
Problem      : All Nodes Distance K in Binary Tree
Platform     : LeetCode 863

Difficulty   : Medium

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

class Solution
{
    void markParents(TreeNode* root,
                     unordered_map<TreeNode*,TreeNode*>& parent)
    {
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            TreeNode* node=q.front();
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

public:

    vector<int> distanceK(TreeNode* root,
                          TreeNode* target,
                          int k)
    {
        unordered_map<TreeNode*,TreeNode*> parent;
        markParents(root,parent);

        unordered_map<TreeNode*,bool> vis;

        queue<TreeNode*> q;

        q.push(target);
        vis[target]=true;

        while(!q.empty())
        {
            int size=q.size();

            if(k--==0)
                break;

            while(size--)
            {
                TreeNode* node=q.front();
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

        vector<int> ans;

        while(!q.empty())
        {
            ans.push_back(q.front()->val);
            q.pop();
        }

        return ans;
    }
};

int main()
{
    return 0;
}