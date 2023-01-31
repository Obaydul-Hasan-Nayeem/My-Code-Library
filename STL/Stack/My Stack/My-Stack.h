#include <bits/stdc++.h>

using namespace std;

class Node {
 public:
    int data;
    Node* prv;
    Node* nxt;

    Node(int val) { // constructor
        data = val;
        prv = NULL;
        nxt = NULL;
    }
};


class Stack {
    Node* head;
    Node* top;
    int sz = 0;

public:
    Stack() { // constructor
        head = NULL;
        top = NULL;
    }

    void PUSH(int val) { // O(1)
        sz++;
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = top = newNode; // two lines in one
            return;
        }

        top->nxt = newNode;
        newNode->prv = top;
        top = newNode;
    }

    int TOP() { // O(1)
        return top->data;
    }

    void POP() { // O(1)
        Node* delNode = top;

        if(top == head) {
            top = NULL;
            head = NULL;
        }
        else {
            top = delNode->prv;
            top->nxt = NULL;
        }

        delete delNode;
        sz--;
    }

    bool EMPTY() { // O(1)
        if(sz == 0) return true;
        return false;
    }

    int SIZE() { // O(1)
        return sz;
    }
};

