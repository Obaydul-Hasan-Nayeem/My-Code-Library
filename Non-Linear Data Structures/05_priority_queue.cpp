/*
    Basic Info:
        - it is a non linear ds
        - STL: priority_queue<data type> pq;
                pq.push(x);
                pq.pop();
                pq.top();

    Operations:
        - push O(logn)
        - pop O(logn)
        - top O(n)
        - size

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
    void Insert(int x) {
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

    void build_from_array(vector<int> &a) {
        nodes = a;
        int n = nodes.size();
        int last_non_leaf = n/2 - 1;
        for(int i = last_non_leaf; i >= 0; i--) {
            down_heapify(i);
        }
    }

    int Size() {
        return nodes.size();
    }


};

class PriorityQueue {
public:
    MaxHeap h;
    PriorityQueue() {

    }

    void push(int x) {
        h.Insert(x);
    }

    void pop() {
        h.Delete(0);
    }

    int top() {
        return h.GetMax();
    }

    int size() {
        return h.Size();
    }
};

int main() {

    PriorityQueue pq;
    pq.push(5);
    pq.push(7);
    pq.push(10);
    pq.push(1);
    pq.push(2);

    while(pq.size() != 0) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;

return 0;
}

