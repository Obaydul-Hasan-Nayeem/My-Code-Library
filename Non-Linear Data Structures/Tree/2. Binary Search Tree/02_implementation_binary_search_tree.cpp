/*
    > insertion; worst: O(height), avg: O(log2(n))
    > searching; worst: O(height), avg: O(log2(n))
    > deletion;  worst: O(height), avg: O(log2(n))
        case-1:
        case-2:
        case-3:
            i. inorder successor k khuje ber korte hobe [inorder successor: target value'r right subtree te shobcheye minimum value]
            ii. jeta delete korbo (target value) shekhane inorder successor boshabo.
            iii. jekhane inorder successor peyechi sheta delete kore dibo.

    > height
        in worst case, height = n
        in average case, height = log2(n)
*/

#include <bits/stdc++.h>

using namespace std;

class node {
public:
    int value;
    node* Left;
    node* Right;
};

class BST {
public:
    node* root;

    BST() {
        root = NULL;
    }

    node* CreateNewNode(int val) {
        node* newnode = new node;
        newnode->value =  val;
        newnode->Left = NULL;
        newnode->Right = NULL;
        return newnode;
    }

    // shudhumatro print korar jonno
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
                l = a->Left->value;
                q.push(a->Left);
            }
            if(a->Right != NULL) {
                r = a->Right->value;
                q.push(a->Right);
            }

            cout << "Node_Value = " << a->value << ", Left_Child = " << l << ", Right_Child = " << r << "\n";
        }
    }

    void Insert(int val) {
        node* newnode = CreateNewNode(val);
        if(root == NULL) {
            root = newnode;
            return;
        }
        node* cur = root;
        node* prv = NULL;
        while(cur != NULL) {
            if(newnode->value > cur->value) {
                prv = cur;
                cur = cur->Right;
            }
            else {
                prv = cur;
                cur = cur->Left;
            }
        }
        if(newnode->value > prv->value) {
            prv->Right = newnode;
        }
        else {
            prv->Left = newnode;
        }
    }

    bool Search(int val) {
        node* cur = root;
        while(cur != NULL) {
            if(val > cur->value) {
                cur = cur->Right;
            }
            else if(val < cur->value) {
                cur = cur->Left;
            }
            else {
                // val == cur->value
                return true;
            }
        }
        return false;
    }

    void Delete(int val) {
        node* cur = root;
        node* prv = NULL;

        while(cur != NULL) {
            if(val > cur->value) {
                prv = cur;
                cur = cur->Right;
            }
            else if(val < cur->value) {
                prv = cur;
                cur = cur->Left;
            }
            else {
                // null or val == cur->value
                break;
            }
        }
        if(cur == NULL) {
            cout << "Value is not present in the BST\n";
            return;
        }

        /// Case-1: Both child is null
        if(cur->Left == NULL && cur->Right ==  NULL) {
            if(prv->Left != NULL && prv->Left->value == cur->value) {
                prv->Left = NULL;
            }
            else {
                prv->Right = NULL;
            }
            delete cur;
            return;
        }

        /// Case-2: Node has only one child [Right]
        if(cur->Left == NULL && cur->Right != NULL) {
            if(prv->Left != NULL && prv->Left->value == cur->value) {
                prv->Left = cur->Right;
            }
            else {
                prv->Right = cur->Right;
            }
            delete cur;
            return;
        }

        /// Case-2: Node has only one child [Left]
        if(cur->Right == NULL && cur->Left != NULL) {
            if(prv->Left != NULL && prv->Left->value == cur->value) {
                prv->Left = cur->Left;
            }
            else {
                prv->Right = cur->Left;
            }
            delete cur;
            return;
        }

        /// Case-3: Node has two child
        node* tmp = cur->Right;
        while(tmp->Left != NULL) {
            tmp = tmp->Left;
        }
        int saved = tmp->value;
        Delete(saved); // recursive call to this Delete function. [case-1 k target kore]
        cur->value = saved;
    }
};


int main() {

    BST bst;
    bst.Insert(6);
    bst.Insert(4);
    bst.Insert(3);
    bst.Insert(5);
    bst.Insert(7);
    bst.Insert(8);

    bst.BFS();

    cout << bst.Search(9) << "\n";
    cout << bst.Search(7) << "\n";

    /// case-1:
//    bst.Delete(8);
//    bst.BFS();

    /// case-2:
//    bst.Delete(7);
//    bst.BFS();

    /// case-3:
      bst.Delete(6);
      bst.BFS();

return 0;
}
