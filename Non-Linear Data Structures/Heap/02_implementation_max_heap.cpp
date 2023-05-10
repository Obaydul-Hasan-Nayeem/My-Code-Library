/*
    <>
        For i index,
        Left Child = 2i + 1
        Right Child = 2i - 1
        Parent = (i - 1) / 2
*/

#include <bits/stdc++.h>

using namespace std;

class MaxHeap {
public:
    vector<int> nodes;

    MaxHeap() {

    }

    // O(log n)
    void up_heapify(int idx) {
        while(idx > 0 && nodes[idx] > nodes[(idx - 1) / 2]) {
            swap(nodes[idx], nodes[(idx - 1) / 2]);
            idx = (idx - 1) / 2; // parent = (i - 1) / 2
        }
    }

    // O(log n)
    void insert(int x) {
        nodes.push_back(x); // O(1)
        up_heapify(nodes.size() - 1);
    }

    // O(log n)
    void down_heapify(int idx) {
        while(1) {
            int largest = idx;
            int l = 2*idx + 1;
            int r = 2*idx + 2;

            if(l < nodes.size() && nodes[largest] < nodes[l]) {
                largest = l;
            }
            if(r < nodes.size() && nodes[largest] < nodes[r]) {
                largest = r;
            }
            if(largest == idx) {
                break;
            }
            swap(nodes[idx], nodes[largest]);
            idx = largest;
        }
    }

    // O(log n)
    void Delete(int idx) {
        if(idx >= nodes.size()) { // corner case: not existing the index
            return;
        }

        swap(nodes[idx], nodes[nodes.size()-1]);
        nodes.pop_back();
        down_heapify(idx);
    }

    // O(n)
    void PrintHeap() {
        for(int i = 0; i < nodes.size(); i++) {
            cout << nodes[i] << " ";
        }
        cout << "\n";
    }

    // O(1)  return the max element
    int GetMax() {
        if(nodes.empty()) {
            cout << "Heap is empty!\n";
            return -1;
        }
        return nodes[0];
    }

    // O(log n) return the max element and also delete it
    int ExtractMax() {
        if(nodes.empty()) {
            cout << "Heap is empty!\n";
            return -1;
        }
        int ret = nodes[0];
        Delete(0); // O(log n)
        return ret;
    }
};

int main() {

    MaxHeap heap;
    heap.insert(4);
    heap.insert(7);
    heap.insert(9);
    heap.insert(1);
    heap.insert(10);
    heap.insert(20);
    heap.insert(30);
    heap.PrintHeap();

    heap.Delete(0);
    heap.PrintHeap();

    cout << heap.GetMax() << "\n";
    cout << heap.ExtractMax() << "\n";
    cout << heap.ExtractMax() << "\n";

return 0;
}
