
#include <bits/stdc++.h>

using namespace std;

template <class T>
class node {
public:
    T data;
    node * nxt;
};

template <class T>
class SinglyLinkedList {
public:
    node<T> * head;
    int sz;
    SinglyLinkedList() {
        head = NULL;
        sz = 0;
    }

    // function to create a new node with given data and insert it O(1)
    node<T> * CreateNewNode(T data) {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
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
        head = newnode;
    }

    // Delete at head
    void DeleteAtHead() {
        if(head == NULL) {
            return;
        }
        sz--;
        node<T> *a = head;
        head = a->nxt;
        delete a;
    }


    // print the size of the linked list O(1)
    int getSize() {
        return sz;
    }
};

// Stack using singly linked list
template <class T>
class Stack {
public:
    SinglyLinkedList<T> sl;

    Stack() {

    }

    T top() {
        if(sl.getSize() == 0) {
            cout << "Stack is empty!\n";
            T a;
            return a;
        }
        return sl.head->data;
    }

    void push(T val) {
        sl.InsertAtHead(val);
    }

    void pop() {
        if(sl.getSize() == 0) {
            cout << "Stack is empty!\n";
            return;
        }
        sl.DeleteAtHead();
    }
};


int main() {

    Stack<double> sl;
    sl.push(4.5);
    sl.push(6.7);
    sl.push(8.7);

    cout << sl.top() << "\n";

    sl.pop();

    cout << sl.top() << "\n";

    Stack<char> sl2;
    sl2.push('a');
    sl2.push('b');
    sl2.push('c');

    cout << sl2.top() << "\n";

    sl2.pop();

    cout << sl2.top() << "\n";

return 0;
}
