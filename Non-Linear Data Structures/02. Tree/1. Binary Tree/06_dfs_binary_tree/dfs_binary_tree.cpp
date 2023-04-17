/*
    DFS: Depth-First Search
    It uses recursive function.

    [IMAGE on this folder]
    preorder_DFS: 0, 1, 3, 4, 2, 5
    inorder_DFS: 5 1 0 3 2 4

    Types / Variants:
        <> inorder: f(left) > root > f(right)
        <> preorder: root > f(left) > f(right)
        <> postorder: f(left) > f(right) > root
*/

#include <bits/stdc++.h>

using namespace std;

class node {
public:
    int id;
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

    node* CreateNewNode(int id) {
        node* newnode = new node;
        newnode->id = id;
        newnode->Left = NULL;
        newnode->Right = NULL;
        return newnode;
    }

    void build_binary_tree() {
        node* allnode[6];
        for(int i = 0; i < 6; i++) {
            allnode[i] = CreateNewNode(i);
        }

        allnode[0]->Left = allnode[1];
        allnode[0]->Right = allnode[2];

        allnode[1]->Left = allnode[5];
        allnode[1]->Parent = allnode[0];

        allnode[2]->Left = allnode[3];
        allnode[2]->Right = allnode[4];
        allnode[2]->Parent = allnode[0];

        allnode[5]->Parent = allnode[1];

        allnode[3]->Parent = allnode[2];
        allnode[4]->Parent = allnode[2];

        root = allnode[0];
    }

    void preorder_DFS(node *a) {
        if(a == NULL) {
            return;
        }
        cout << a->id << " ";
        preorder_DFS(a->Left);
        preorder_DFS(a->Right);
    }

    void inorder_DFS(node *a) {
        if(a == NULL) {
            return;
        }
        inorder_DFS(a->Left);
        cout << a->id << " ";
        inorder_DFS(a->Right);
    }

    void postorder_DFS(node *a) {
        if(a == NULL) {
            return;
        }
        postorder_DFS(a->Left);
        postorder_DFS(a->Right);
        cout << a->id << " ";
    }
};

int main() {

    BinaryTree bt;
    bt.build_binary_tree();
    bt.preorder_DFS(bt.root);
    cout << "\n";
    bt.inorder_DFS(bt.root);
    cout << "\n";
    bt.postorder_DFS(bt.root);
    cout << "\n";

return 0;
}
