/*
==================================================
Problem      : LRU Cache
Platform     : LeetCode 146
Difficulty   : Hard

Pattern      : DLL + HashMap

Time          : O(1)

Space         : O(capacity)

Key Idea
---------
HashMap + Doubly Linked List.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class LRUCache
{
    int cap;

    list<pair<int,int>> dll;

    unordered_map<int,list<pair<int,int>>::iterator> mp;

public:

    LRUCache(int capacity)
    {
        cap=capacity;
    }

    int get(int key)
    {
        if(!mp.count(key))
            return -1;

        auto it=mp[key];

        int val=it->second;

        dll.erase(it);

        dll.push_front({key,val});

        mp[key]=dll.begin();

        return val;
    }

    void put(int key,int value)
    {
        if(mp.count(key))
            dll.erase(mp[key]);

        else if(dll.size()==cap)
        {
            mp.erase(dll.back().first);

            dll.pop_back();
        }

        dll.push_front({key,value});

        mp[key]=dll.begin();
    }
};

int main()
{
    LRUCache cache(2);

    cache.put(1,1);
    cache.put(2,2);

    cout<<cache.get(1);

    return 0;
}
