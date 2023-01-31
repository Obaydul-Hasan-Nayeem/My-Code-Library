/*
Write a function to remove the first element of a singly linked list.
Sample Input: [1, 2, 3, 4, 5]
Sample Output: Singly linked list containing the elements [2, 3, 4, 5]

*/



/// not completed
#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node * nxt;
};

class SinglyLinkedList {
public:
    Node * head;
    SinglyLinkedList() {
        head = NULL;
    }

    Node * CreateNewNode(int value) {
        Node * newnode = new Node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    void InsertAtFront(int value) {
        Node * a = CreateNewNode(value);
        if(head == NULL) {
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
    }

    void Traverse() {
        Node * a = head;
        while(a != NULL) {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }
};

int main() {

SinglyLinkedList sl;
sl.InsertAtFront(5);
sl.InsertAtFront(6);
sl.InsertAtFront(7);
sl.Traverse();

}
