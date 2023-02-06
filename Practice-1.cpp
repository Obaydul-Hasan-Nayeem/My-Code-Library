#include<bits/stdc++.h>

using namespace std;



class node
{
public:
    int data;
    node * nxt;
    node * prv;
};

class DoublyLinkedList
{
public:
    node *head;
    node *tail;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
        tail = NULL;
    }

    //Creates a new node with the given data and returns it O(1)
    node * CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    //Inserts the given data at the given index O(n)
    void Insert(int index, int data)
    {
        if(index > sz)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(data);
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index!= index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        // a = cur_index - 1
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node *b = a->nxt;
        b->prv = newnode;
        a->nxt = newnode;
        sz++;
    }

    //Deletes the given index O(n)
    void Delete(int index)
    {
        if(index >= sz)
        {
            cout<<index<<" doesn't exist.\n";
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != index)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->prv;
        node *c = a->nxt;
        if(b!=NULL)
        {
            b->nxt = c;
        }
        if(c!= NULL)
        {
            c->prv = b;
        }
        delete a;
        if(index==0)
        {
            head = c;
        }
        sz--;
    }

    //Prints the linked list O(n)
    void Traverse()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }

    //Reverse the doubly linked list O(n)
    void Reverse()
    {
        if(head==NULL)
        {
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != sz-1)
        {
            a = a->nxt;
            cur_index++;
        }
        // last index is in a

        node *b = head;
        while(b!= NULL)
        {
            swap(b->nxt, b->prv);
            b = b->prv;
        }
        head = a;
    }

    // swap the i-th index and j-th index
    void SWAP(int i, int j)
    {
        node* a = head;
        node* b = head;

        if(i == j)
        {
            return;
        }

        int idx = 0;
        while(a != NULL && idx != i)
        {
            a = a->nxt;
            idx++;
        }
        idx = 0;
        while(b != NULL && idx != j)
        {
            b = b->nxt;
            idx++;
        }

        if(a == NULL && b == NULL)
        {
            return;
        }

        int temp = a->data;
        a->data = b->data;
        b->data = temp;
    }

    // delete all the nodes that have data=0
    void deleteZero()
    {
        node* current = head;
        while (current != NULL)
        {
            if (current->data == 0)
            {
                if (current == head)
                {
                    head = current->nxt;
                    head->prv = NULL;
                }
                else if (current == tail)
                {
                    tail = current->prv;
                    tail->nxt = NULL;
                }
                else
                {
                    current->prv->nxt = current->nxt;
                    current->nxt->prv = current->prv;
                }
            }
            current = current->nxt;
        }
    }
};


int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(7);
    dl.InsertAtHead(0);
    dl.InsertAtHead(6);
    dl.InsertAtHead(0);
    dl.InsertAtHead(3);

    dl.Traverse();

    dl.SWAP(1, 4);
    dl.Traverse();

    dl.deleteZero();
    dl.Traverse();

    return 0;
}
