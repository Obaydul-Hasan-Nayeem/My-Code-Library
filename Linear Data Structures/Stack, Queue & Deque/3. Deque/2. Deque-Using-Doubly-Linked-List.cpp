#include <bits/stdc++.h>

using namespace std;

class node {
public:
    int data;
    node* prv;
    node* nxt;
};

class Deque {
public:
    node* head;
    node* tail;
    int sz;

    Deque() {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node* CreateNewNode(int value) {
        node* newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    // push_back O(1)
    void push_back(int val) {
        node* newnode = CreateNewNode(val);
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
    void push_front(int val) {
        node* newnode = CreateNewNode(val);
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
        node* a = tail;
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
        node* a = head;
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

int main() {

    Deque d;
    d.push_back(5);
    d.push_back(6);
    d.push_front(7);
    cout << d.front() << "\n";
    d.pop_back();
    cout << d.back() << "\n";

return 0;
}
