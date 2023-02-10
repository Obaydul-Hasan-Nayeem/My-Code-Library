#include <bits/stdc++.h>

using namespace std;

template<class T>
class Queue {
public:
    T *a;
    T array_cap;
    T l, r;
    int sz;

    Queue() {
        a = new T[1];
        array_cap = 1;
        l = 0;
        r = -1;
        sz = 0;
    }

    void remove_circular() {
        if(l > r) {
            T *tmp = new T[array_cap];
            T idx = 0;

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
        T *tmp = new T[array_cap*2];
        for(int i = 0; i < array_cap; i++) {
            tmp[i] = a[i];
        }
        swap(a, tmp);
        array_cap = array_cap * 2;
        delete []tmp;
    }

    // Insert Element O(1)
    void enqueue(T val) {
        if(sz == array_cap) {
            increase_size();
        }
        r++;
        if(r == array_cap) {
            r = 0;
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
    T front() {
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

// driver code
int main() {

    Queue<int> q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    cout << "Queue Size = " << q.size() << "\n";
    cout << "Front Element = " << q.front() << "\n";

    cout << "\n";

    q.enqueue(8);
    cout << "Queue Size [After Enqueued] = " << q.size() << "\n";
    cout << "Front Element = " << q.front() << "\n";

    q.dequeue();
    cout << "\n";

    cout << "Queue Size [After Dequeued] = " << q.size() << "\n";
    cout << "Front Element = " << q.front() << "\n";

return 0;
}

