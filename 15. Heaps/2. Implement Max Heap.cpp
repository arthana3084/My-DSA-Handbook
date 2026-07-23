/*
==================================================
Problem      : Implement Max Heap

Pattern      : Heap

Time          : insert/delete -> O(log n)
Space         : O(n)
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class MaxHeap
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

            if(heap[parent]<heap[i])
            {
                swap(heap[parent],heap[i]);
                i=parent;
            }
            else
                break;
        }
    }

    void deleteMax()
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
            int largest=i;

            if(left<heap.size() && heap[left]>heap[largest])
                largest=left;

            if(right<heap.size() && heap[right]>heap[largest])
                largest=right;

            if(largest==i)
                break;

            swap(heap[i],heap[largest]);
            i=largest;
        }
    }

    int getMax()
    {
        return heap.empty()?-1:heap[0];
    }
};

int main()
{
    return 0;
}