/*
    Operations:
        > enqueue: insert data at head
        > dequeue: delete data from tail
        > front: give data from head
        > size
*/


#include <bits/stdc++.h>

using namespace std;

class node {
public:
    int data;
    node* nxt;
};

class Queue {
public:
    node* head;
    node* tail;
    int sz;

    Queue(){
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node *CreateNode(int val) {
        node *newnode = new node;
        newnode->data = val;
        newnode->nxt = NULL;
        return newnode;
    }

    void enqueue(int val) {
        node *newnode = CreateNode(val);
        if(head == NULL) { // if queue is empty
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }

        tail->nxt = newnode;
        tail = newnode;
        sz++;
    }

    void dequeue() {
        if(sz == 0) {
            cout << "Queue is empty!\n";
            return;
        }

        if(sz == 1) {
            delete head;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }

        node *a = head;
        head = head->nxt;
        delete a;
        sz--;
    }

    int front() {
        if (sz == 0) {
            cout << "Queue is empty!\n";
            return -1;
        }
        return head->data;
    }

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
    cout << "\n";

    cout << "Size=" << q.size() << "\n";
    cout << "Front=" << q.front() << "\n";
return 0;
}
