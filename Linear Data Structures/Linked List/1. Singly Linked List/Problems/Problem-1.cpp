/*

Write the singly linked list class and a function to add a new element
to the front of a singly linked list.
Also write a function to print all the elements of the linked-list.
Sample Input: [1, 2, 3, 4, 5], new element: 0
Sample Output: Singly linked list containing the elements [0, 1, 2, 3, 4, 5]

*/

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
        Node *a = CreateNewNode(value);
        if(head == NULL) {
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
   }

   void Traverse() {
        Node *a = head;
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
    sl.InsertAtFront(4);
    sl.InsertAtFront(3);
    sl.InsertAtFront(2);
    sl.InsertAtFront(1);
    sl.InsertAtFront(0);

    sl.Traverse();

return 0;
}


