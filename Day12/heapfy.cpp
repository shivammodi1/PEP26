#include <bits/stdc++.h>
using namespace std;

// Heapify:
// Heapify is the process of converting an array into a heap data structure.

// heapify function to maintain the max-heap property(bubble down)
void heapify(vector<int> &heap, int index)
{
    int size = heap.size();
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < size && heap[left] > heap[largest])
    {
        largest = left;
    }
    if (right < size && heap[right] > heap[largest])
    {
        largest = right;
    }

    if (largest != index)
    {
        swap(heap[index], heap[largest]);
        heapify(heap, largest);
    }
}

void buildMaxHeap(vector<int> &heap)
{
    int n = heap.size();
    // why always n/2 - 1?
    // Because in a binary heap, the last non-leaf node is at index n/2 - 1.
    // All nodes from index n/2 to n-1 are leaf nodes, so they don't need to be heapified.

    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(heap, i);
    }
}

int main()
{
    vector<int> arr = {3, 9, 2, 1, 4, 5};
    buildMaxHeap(arr);

    cout << "Max Heap: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
