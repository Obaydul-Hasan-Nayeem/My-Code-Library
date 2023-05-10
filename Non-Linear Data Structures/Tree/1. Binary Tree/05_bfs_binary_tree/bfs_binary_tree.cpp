/*
BFS: Breadth First Search / Level Order Traversal

    > Traverse: level by level
    > Targets:
        - visit all nodes in a graph
        - output the order that nodes are visited
    > Steps:
        - Select a node
        - Explore all node (visit all adjacent nodes)

       [IMAGE on this folder]
queue = {}
    step-0 -> {0}
    step-1 -> {1, 2} [0 pop and push the left and right child of 0]
    step-2 -> {2, 3, 4} [1 pop and push the left and right child of 1]
    step-3 -> {3, 4, 5} [3 pop and push the left and child of 3]
    step-4 -> {4, 5} [3 pop, no left or right child of 3]
    step-5 -> {5} [4 pop, no left or right child of 4]
    step-6 -> {} [5 pop, no left or right child of 5]
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

    void BFS() {
        if(root == NULL) { // corner case
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
                q.push(a->Left);
            }
            if(a->Right != NULL) {
                r = a->Right->id;
                q.push(a->Right);
            }
            if(a->Parent != NULL) {
                p = a->Parent->id;
                // parent k push kora lagbe na. karon parent already visit kora hoye geche.
            }

            cout << "Node_Id = " << a->id << ", Left_Child = " << l << ", Right_Child = " << r << ", Parent = " << p << "\n";
        }
    }
};

int main() {
    BinaryTree bt;
    bt.build_binary_tree();
    bt.BFS();
return 0;
}
