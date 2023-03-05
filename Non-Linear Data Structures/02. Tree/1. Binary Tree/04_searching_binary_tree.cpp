/*

*/


#include <bits/stdc++.h>

using namespace std;

class node {
public:
    int id;
    int value;
    node *Left;
    node *Right;
    node *Parent;
};

// manually inserting node in binary tree and print the tree info
class BinaryTree{
public:
    node* root;

    BinaryTree() {
        root = NULL;
    }

    node* CreateNewNode(int id, int val) {
        node* newnode = new node;
        newnode->id = id;
        newnode->value = val;
        newnode->Left = NULL;
        newnode->Right = NULL;
        return newnode;
    }

    void insertion(int id, int val) {

        node* newnode = CreateNewNode(id, val);
        if(root == NULL) {
            root = newnode;
            return;
        }

        queue<node*> q;
        q.push(root);

        while(!q.empty()) {
            node* a = q.front();
            q.pop();
            if(a->Left != NULL) {
                q.push(a->Left);
            }
            else {
                a->Left = newnode;
                newnode->Parent = a;
                return;
            }

            if(a->Right != NULL) {
                q.push(a->Right);
            }
            else {
                a->Right = newnode;
                newnode->Parent = a;
                return;
            }
        }
    }


    void BFS() {
        if(root == NULL) {
            return;
        }
        queue<node*> q;
        q.push(root);

        while(!q.empty()) {
            node *a = q.front();
            q.pop();
            int l = -1, r = -1, p = -1;

            if(a->Left != NULL) {
                l = a->Left->id;
                q.push(a->Left); // inserted in the left child of node a
            }
            if(a->Right != NULL) {
                r = a->Right->id;
                q.push(a->Right); // inserted in the right child of node a
            }
            if(a->Parent != NULL) {
                p = a->Parent->id;
                // parent k push kora lagbe na. karon parent already visit kora hoye geche.
            }

            cout << "Node_Id = " << a->id << ", Left_Child = " << l << ", Right_Child = " << r << ", Parent = " << p << "\n";
        }
    }

    // searching [Using DFS]
    void Search(node* a, int val) {
        if(a == NULL) {
            return;
        }
        if(a->value == val) {
            cout << a->id << " ";
        }

        Search(a->Left, val);
        Search(a->Right, val);
    }
};

int main() {
    BinaryTree bt;
    bt.insertion(0, 5);
    bt.insertion(1, 10);
    bt.insertion(2, 10);
    bt.insertion(3, 9);
    bt.insertion(4, 8);
    bt.insertion(5, 5);
    bt.insertion(6, 7);

    bt.BFS();

    cout << "\n";

    bt.Search(bt.root, 5);
    cout << "\n";
    bt.Search(bt.root, 10);
return 0;
}

