#include <bits/stdc++.h>

using namespace std;

const int MAX_SIZE = 500;

class Queue {
public:
    int a[MAX_SIZE];
    int l, r;

    Queue() {
        l = 0;
        r = -1;
    }

    // Insert Element O(1)
    void enqueue(int val) {
        if(r+1 >= MAX_SIZE) {
            cout << "Queue is full!\n";
            return;
        }
        r++;
        a[r] = val;
    }

    // Delete Element O(1)
    void dequeue() {
        if(l > r) {
            cout << "Queue is empty!\n";
            return;
        }
        l++;
    }

    // Return the front Element O(1)
    int front() {
        if(l > r) {
            cout << "Queue is empty!\n";
            return -1;
        }
        return a[l];
    }

    // Return the queue size O(1)
    int size() {
        return r-l+1;
    }
};

int main() {
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    cout << "Size=" << q.size() << "\n";
    cout << "Front=" << q.front() << "\n";

    q.dequeue();
    cout << "\n";

    cout << "Size=" << q.size() << "\n";
    cout << "Front=" << q.front() << "\n";
return 0;
}
