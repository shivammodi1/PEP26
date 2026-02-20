#include <bits/stdc++.h>
using namespace std;

class MaxHeap
{
public:
    vector<int> heap;

    // bubble up the value at index to its correct position
    void bubbleUp(int index)
    {
        while (index > 0)
        {
            // find the parent index
            int parent = (index - 1) / 2;

            // curr node > than parent
            if (heap[index] > heap[parent])
            {
                swap(heap[index], heap[parent]);
                index = parent;
            }
            else
            {
                break;
            }
        }
    }

    // insert a value into the heap
    void insert(int value)
    {
        heap.push_back(value);
        bubbleUp(heap.size() - 1);
    }

    // deletion in heap
    // To delete from heap:
    // 1. Replace the root node with last node in the heap
    // 2. Remove the last node
    // 3. Bubble down the new root node to its correct position
    void bubbleDown(int index)
    {

        int size = heap.size();

        while (index < size)
        {
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
                index = largest;
            }
            else
            {
                break;
            }
        }
    }

    // delete the root element
    void deleteRoot()
    {
        if (heap.empty())
            return;

        // replace root with last element
        heap[0] = heap.back();
        // remove last element
        heap.pop_back();
        // bubble down the new root
        bubbleDown(0);
    }

};

int main()
{
    MaxHeap maxHeap;

    maxHeap.insert(10);
    maxHeap.insert(20);
    maxHeap.insert(5);
    maxHeap.insert(15);
    maxHeap.insert(30);

    cout << "Max Heap: ";
    for (int value : maxHeap.heap)
    {
        cout << value << " ";
    }
    cout << endl;

    maxHeap.deleteRoot();

    cout << "Max Heap after deleting root: ";
    for (int value : maxHeap.heap)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}