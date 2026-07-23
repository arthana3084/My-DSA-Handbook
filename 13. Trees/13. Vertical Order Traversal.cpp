/*
==================================================
Problem      : Vertical Order Traversal
Platform     : LeetCode 987
Difficulty   : Hard

Pattern       : BFS + Ordered Map

Time          : O(n log n)
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
public:

    vector<vector<int>> verticalTraversal(TreeNode* root)
    {
        map<int,map<int,multiset<int>>> mp;

        queue<pair<TreeNode*,pair<int,int>>> q;

        q.push({root,{0,0}});

        while(!q.empty())
        {
            auto it=q.front();
            q.pop();

            TreeNode* node=it.first;
            int x=it.second.first;
            int y=it.second.second;

            mp[x][y].insert(node->val);

            if(node->left)
                q.push({node->left,{x-1,y+1}});

            if(node->right)
                q.push({node->right,{x+1,y+1}});
        }

        vector<vector<int>> ans;

        for(auto p:mp)
        {
            vector<int> col;

            for(auto q:p.second)
                col.insert(col.end(),q.second.begin(),q.second.end());

            ans.push_back(col);
        }

        return ans;
    }
};

int main()
{
    return 0;
}