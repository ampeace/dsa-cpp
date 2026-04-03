// A C++ program to demonstrate common Binary Heap Operations
#include <iostream>
#include <vector>
using namespace std;
class MinHeap {
    vector<int> heap;
    public:
    MinHeap() {
        heap = vector<int>();
    }

    // Get parent index
    int parent(int i) {
        return (i - 1) / 2;
    }

    // Get left child index
    int left(int i) {
        return 2 * i + 1;
    }

    // Get right child index
    int right(int i) {
        return 2 * i + 2;
    }

    // Insert element
    void insert(int val) {
        heap.push_back(val);
        heapifyUp(heap.size() - 1);
    }

    // Heapify Up (for insert)
    void heapifyUp(int i) {
        while (i > 0 && heap[parent(i)] > heap[i]) {
            int p = parent(i);
            swap(heap[i], heap[p]);
            i = p;
        }
    }

    // Extract Minimum
    int extractMin() {
        if (heap.size() == 0) {
            cout << "Heap is empty" << endl;
            return -1;
        }
        if (heap.size() == 1) {
            int minVal = heap.back();
            heap.pop_back();
            return minVal;
        }

        int root = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
        return root;
    }

    // Heapify Down (for delete)
    void heapifyDown(int i) {
        int smallest = i;
        int l = left(i);
        int r = right(i);

        if (l < heap.size() && heap[l] < heap[smallest]) {
            smallest = l;
        }

        if (r < heap.size() && heap[r] < heap[smallest]) {
            smallest = r;
        }

        if (smallest != i) {
            swap(heap[i], heap[smallest]);
            heapifyDown(smallest);
        }
    }

    // Get minimum element
    int getMin() {
        if (heap.size() == 0) {
            cout << "Empty heap" << endl;
            return -1;
        }
        return heap[0];
    }

    // Delete element at index
    void deleteAt(int i) {
        heap[i] = INT_MIN;   // make it smallest
        heapifyUp(i);
        extractMin();
    }

    // Display heap
    void print() {
        for (int val : heap) {
            cout << val << " ";
        }
        cout << endl;
    }
};