/*
==================================================
STL Topic : Priority Queue

Default : Max Heap

Min Heap

priority_queue<int, vector<int>, greater<int>>

==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(5);
    pq.push(10);
    pq.push(2);

    cout<<pq.top()<<endl;

    priority_queue<int,vector<int>,greater<int>> minpq;

    minpq.push(5);
    minpq.push(10);
    minpq.push(2);

    cout<<minpq.top();

    return 0;
}
