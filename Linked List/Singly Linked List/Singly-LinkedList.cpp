#include <bits/stdc++.h>

using namespace std;

// node structure
class node{
public:
    int data; // If wish, we can use more data type simultaneously. Ex., char ch
    node * nxt; // pointer for the next node
};

// linked list class
class LinkedList {
    public:
    node * head; // it will remember the first node of the linked list
    int sz;

    LinkedList() { // constructor to define the initial value of head.
        head = NULL;
        sz = 0;
    }

    // create a new node with data = value and nxt = NULL
    node* CreateNewNode(int value) {
        node *newnode = new node;
        newnode->data = value; // has to use this sign (->) after the pointer type structure or class. Otherwise, in the general variable (.).
        newnode->nxt = NULL;
        return newnode;
    }

    // insert new value at head
    void InsertAtHead(int value) {

        sz++; // to record the size of the linked list

        node *a = CreateNewNode(value);

        if(head == NULL) {
            head = a;
            return;
        }

        // if head is not NULL
        a->nxt = head;
        head = a;
    }


    // Insert value at any index
    void InsertAtAnyIndex(int index, int value) { //O(n)
        if(index < 0 || index > sz) { // corner case
            return;
        }

        if(index == NULL) {
            InsertAtHead(value);
            return;
        }
        sz++;
        node *a = head;
        int cur_index = 0;
        while(cur_index != index-1) { //O(n)
            a = a->nxt;
            cur_index++;
        }
        node *newnode = CreateNewNode(value);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }

    // insert value after any value
    void InsertAfterValue(int value, int data) {
        node *a = head;
        while(a != NULL) {
            if(a->data == value) {
                break;
            }
            a = a->nxt;
        }

        if(a == NULL) {
            cout << value << " doesn't exists in the linked list." << "\n";
            return;
        }
        sz++;
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }


    // print the linked list
    void Traverse() {
        node * a = head;
        while(a != NULL) {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }


    // print in the reverse order from 1st node to last node
    void printReverse2(node *a) {
        if(a == NULL) {
            return;
        }
        printReverse2(a->nxt);
        cout << a->data << " ";
    }

    void printReverse() {
        printReverse2(head);
        cout << "\n";
    }

    // search for a single value
    int SearchDistinctValue(int value) {
        node *a = head;
        int index = 0;
        while(a != NULL) {
            if(a->data == value) {
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;
    }


    // search all possible occurance
    void SearchAllValue(int value) {
        node * a = head;
        int index = 0;

        while(a != NULL) {
            if(a->data == value) {
                cout << value << " is found at index " << index << "\n";
            }
            a = a->nxt;
            index++;
        }
    }

    // get size
    int getSize() {
    /// O(1)
    return sz;

    /// O(size of the linked list) = O(n)
    //        node * a = head;
    //        int sz = 0;
    //        while(a != NULL) {
    //            sz++;
    //            a = a->nxt;
    //        }
    //
    //        return sz;
    }

    // delete at head
    void DeleteAtHead() { //O(1)
        if(head == NULL) { // corner case
            return;
        }
        sz--;
        node *a = head;
        head = a->nxt;
        delete a; // not compulsory; but it frees the memory. it is a efficient practice
    }

    // delete any index
    void DeleteAnyIndex(int index) { // O(n)
        if(index < 0 || index > sz-1) {
            return;
        }

        if(index == NULL) {
            DeleteAtHead();
            return;
        }
        sz--;

        node *a = head;
        int cur_index = 0;
        while(cur_index != index-1) { //O(n)
            a = a->nxt;
            cur_index++;
        }
        node *b = a->nxt;
        a->nxt = b->nxt;
        delete b; // not compulsory; but it frees the memory. it is a efficient practice
    }


};


int main() {
    LinkedList l; // object

    cout << "Traverse:\n";
    l.InsertAtHead(10);
    l.Traverse();

    l.InsertAtHead(20);
    l.Traverse();

    l.InsertAtHead(30);
    l.Traverse();

    l.InsertAtHead(40);
    l.Traverse();

    cout << "\nSearchDistinctValue:\n";
    cout << "10 is found at " << l.SearchDistinctValue(10) << "\n";
    cout << "5 is found at " << l.SearchDistinctValue(5) << "\n";
    cout << "30 is found at " << l.SearchDistinctValue(30) << "\n";

    cout << "\nSearchAllValue:\n";
    l.SearchAllValue(30);

    cout << l.getSize() << "\n";
    l.Traverse();
    l.InsertAtAnyIndex(2, 100);
    l.Traverse();
    cout << l.getSize() << "\n";
    l.DeleteAtHead();
    l.Traverse();
    l.DeleteAnyIndex(2);
    l.Traverse();
    cout << l.getSize() << "\n";
    l.InsertAfterValue(100, 65);
    l.Traverse();
    l.printReverse();
    l.Traverse();

return 0;
}


