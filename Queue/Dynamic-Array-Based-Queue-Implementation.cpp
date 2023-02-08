#include <bits/stdc++.h>

using namespace std;

class Queue {
public:
    int *a;
    int array_cap;
    int l, r;
    int sz;

    Queue() {
        a = new int[1];
        array_cap = 1;
        l = 0;
        r = -1;
        sz = 0;
    }

    // array size dynamically increase korte gele circular array crush korbe. tai sheta venge general array kore nite hobe.
    void remove_circular() {
        if(l > r) {
            int *tmp = new int[array_cap];
            int idx = 0;

            for(int i = l; i <= array_cap; i++) {
                tmp[idx] = a[i];
                idx++;
            }

            for(int i = 0; i < r; i++) {
                tmp[idx] = a[i];
                idx++;
            }
            swap(tmp, a);
            l = 0;
            r = array_cap - 1;
        }
    }

    // increase size
    void increase_size() {
        remove_circular();
        int *tmp = new int[array_cap*2];
        for(int i = 0; i < array_cap; i++) {
            tmp[i] = a[i];
        }
        swap(a, tmp);
        array_cap = array_cap * 2;
        delete []tmp;
    }

    // Insert Element O(1)
    void enqueue(int val) {
        if(sz == array_cap) {
            increase_size();
        }
        r++;
        if(r == array_cap) {
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
        if(l == array_cap) {
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

