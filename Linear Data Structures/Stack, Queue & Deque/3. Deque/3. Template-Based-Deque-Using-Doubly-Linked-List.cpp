#include <bits/stdc++.h>

using namespace std;

template<class T>
class node {
public:
    T data;
    node* prv;
    node* nxt;
};

template<class T>
class Deque {
public:
    node<T>* head;
    node<T>* tail;
    int sz;

    Deque() {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node<T> * CreateNewNode(T value) {
        node<T> * newnode = new node<T>;
        newnode->data = value;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    // push_back O(1)
    void push_back(T val) {
        node<T>* newnode = CreateNewNode(val);
        if(sz == 0) {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        tail->nxt = newnode;
        newnode->prv = tail;
        tail = newnode;
        sz++;
    }

    // push front O(1)
    void push_front(T val) {
        node<T> * newnode = CreateNewNode(val);
        if(sz == 0) {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        head->prv = newnode;
        newnode->nxt = head;
        head = newnode;
        sz++;
        return;
    }

    // pop back O(1)
    void pop_back() {
        if(sz == 0) {
            cout << "Deque is empty!\n";
            return;
        }

        if(sz == 1) {
            delete tail; // or delete head;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        node<T>* a = tail;
        tail = tail->prv;
        delete a;
        tail->nxt = NULL;
        sz--;
    }

    // pop front
    void pop_front() {
        if(sz == 0) {
            cout << "Deque is empty!\n";
            return;
        }
        if(sz == 1) {
            delete head; // or delete tail
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        node<T>* a = head;
        head = head->nxt;
        delete a;
        head->prv = NULL;
        sz--;
    }

    // front element O(1)
    int front() {
        if(sz == 0) {
            cout << "Deque is empty!\n";
            return -1;
        }
        return head->data;
    }

    // back element O(1)
    int back() {
        if(sz == 0) {
            cout << "Deque is empty\n";
            return -1;
        }
        return tail->data;
    }
};

// driver code
int main() {

    Deque<int> d;
    d.push_back(5); //5
    d.push_front(7); // 7 5
    cout << d.front() << "\n"; // output: 7
    d.pop_back(); // 7
    d.push_back(3); // 7 3
    cout << d.back() << "\n"; // output: 3
    d.pop_front(); // 3
    cout << d.back() << "\n"; // output: 3

return 0;
}
