/*
==================================================
Problem      : Implement Min Heap

Pattern      : Heap

Time          : insert/delete -> O(log n)
Space         : O(n)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class MinHeap
{
    vector<int> heap;

public:

    void insert(int val)
    {
        heap.push_back(val);

        int i=heap.size()-1;

        while(i>0)
        {
            int parent=(i-1)/2;

            if(heap[parent]>heap[i])
            {
                swap(heap[parent],heap[i]);
                i=parent;
            }
            else
                break;
        }
    }

    void deleteMin()
    {
        if(heap.empty())
            return;

        heap[0]=heap.back();
        heap.pop_back();

        int i=0;

        while(true)
        {
            int left=2*i+1;
            int right=2*i+2;
            int smallest=i;

            if(left<heap.size() && heap[left]<heap[smallest])
                smallest=left;

            if(right<heap.size() && heap[right]<heap[smallest])
                smallest=right;

            if(smallest==i)
                break;

            swap(heap[i],heap[smallest]);
            i=smallest;
        }
    }

    int getMin()
    {
        return heap.empty()?-1:heap[0];
    }
};

int main()
{
    return 0;
}