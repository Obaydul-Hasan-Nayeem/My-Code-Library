
#include <bits/stdc++.h>

using namespace std;

template <class T>
class node {
public:
    T data;
    node * nxt;
    node * prv;
};

template <class T>
class DoublyLinkedList {
public:
    node<T> * head;
    int sz;
    DoublyLinkedList() {
        head = NULL;
        sz = 0;
    }

    // function to create a new node with given data and insert it O(1)
    node<T> * CreateNewNode(T data) {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    // Insert at head with given data O(1)
    void InsertAtHead(T data) {
        sz++;
        node<T> *newnode = CreateNewNode(data);
        if(head == NULL) {
            head = newnode;
            return;
        }
        node<T> *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    // Delete at head
    void DeleteAtHead() {
        if(head == NULL) {
            return;
        }
        node<T> *a = head;
        node<T> *b = head->nxt;
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
template <class T>
class Stack {
public:
    DoublyLinkedList<T> dl;

    Stack() {

    }

    T top() {
        if(dl.getSize() == 0) {
            cout << "Stack is empty!\n";
            T a;
            return a;
        }
        return dl.head->data;
    }

    void push(T val) {
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

    Stack<double> dl;
    dl.push(4.5);
    dl.push(6.7);
    dl.push(4.7);

    cout << dl.top() << "\n";

    dl.pop();
    dl.pop();

    cout << dl.top() << "\n";

return 0;
}
