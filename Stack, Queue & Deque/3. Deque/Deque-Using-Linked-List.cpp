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
};

int main() {

return 0;
}
