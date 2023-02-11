
#include <bits/stdc++.h>

using namespace std;

class node {
public:
    int data;
    node * nxt;
    node * prv;
};

class DoublyLinkedList {
public:
    node * head;
    int sz;
    DoublyLinkedList() {
        head = NULL;
        sz = 0;
    }

    // function to create a new node with given data and insert it O(1)
    node * CreateNewNode(int data) {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    // Insert at head with given data O(1)
    void InsertAtHead(int data) {
        sz++;
        node *newnode = CreateNewNode(data);
        if(head == NULL) {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    // Delete at head
    void DeleteAtHead() {
        if(head == NULL) {
            return;
        }

        node* a = head;
        node* b = head->nxt;
        delete a;
        if(b != NULL) {
            b->prv = NULL;
        }
        head = b;
        sz--;
    }


    // print the size of the linked list O(1)
    int getSize() {
        return sz;
    }
};

// Stack using doubly linked list
class Stack {
public:
    DoublyLinkedList dl;

    Stack() {

    }

    int top() {
        if(dl.getSize() == 0) {
            cout << "Stack is empty!\n";
            return -1;
        }
        return dl.head->data;
    }

    void push(int val) {
        dl.InsertAtHead(val);
    }

    void pop() {
        if(dl.getSize() == 0) {
            cout << "Stack is empty!\n";
            return;
        }
        dl.DeleteAtHead();
    }
};


int main() {

Stack st;
st.push(5);
st.push(6);
st.push(7);
st.push(8);
cout << st.top();

return 0;
}
