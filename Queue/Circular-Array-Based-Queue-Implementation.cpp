#include <bits/stdc++.h>

using namespace std;

const int MAX_SIZE = 500;

class Queue {
public:
    int a[MAX_SIZE];
    int l, r;
    int sz;

    Queue() {
        l = 0;
        r = -1;
        sz = 0;
    }

    // Insert Element O(1)
    void enqueue(int val) {
        if(sz == MAX_SIZE) {
            cout << "Queue is full\n";
            return;
        }
        r++;
        if(r == MAX_SIZE) {
            r = 0; // jokhon last index e chole jabe tokhon r k first index e niye ashte hobe.
        }

        a[r] = val;
        sz++;
    }

    // Delete Element O(1)
    void dequeue() {
        if(sz == 0) {
            cout << "Queue is empty!\n";
            return;
        }
        l++;
        if(l == MAX_SIZE) {
            l = 0;
        }
        sz--;
    }

    // Return the front Element O(1)
    int front() {
        if(sz == 0) {
            cout << "Queue is empty!\n";
            return -1;
        }
        return a[l];
    }

    // Return the queue size O(1)
    int size() {
        return sz;
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

    cout << "Size=" << q.size() << "\n";
    cout << "Front=" << q.front() << "\n";
return 0;
}
