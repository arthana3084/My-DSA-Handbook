/*
==================================================
Problem      : Find Median from Data Stream
Platform     : LeetCode 295

Difficulty   : Hard

Pattern      : Two Heaps

Time          : O(log n)
Space         : O(n)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class MedianFinder
{
    priority_queue<int> leftHeap;

    priority_queue<int,
                   vector<int>,
                   greater<int>> rightHeap;

public:

    MedianFinder()
    {
    }

    void addNum(int num)
    {
        leftHeap.push(num);

        rightHeap.push(leftHeap.top());
        leftHeap.pop();

        if(rightHeap.size()>leftHeap.size())
        {
            leftHeap.push(rightHeap.top());
            rightHeap.pop();
        }
    }

    double findMedian()
    {
        if(leftHeap.size()>rightHeap.size())
            return leftHeap.top();

        return (leftHeap.top()+rightHeap.top())/2.0;
    }
};

int main()
{
    return 0;
}