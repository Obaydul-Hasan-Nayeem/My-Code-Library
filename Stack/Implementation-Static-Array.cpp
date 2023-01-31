/*
Stack Using Static Array
    Functions:
        - Top most element -> ar[stack_size - 1]
        - delete top (pop)
        - add to top (push)
*/

#include <bits/stdc++.h>

using namespace std;

class Stack {
public:
    static const int MAX_SIZE = 500;
    int a[MAX_SIZE];
    int stack_size;
    Stack() {
        stack_size = 0;
    }

    // Add an element in the top O(1)
    void push(int val) {
        if(stack_size+1 > MAX_SIZE) {
            cout << "Stack is full!\n";
            return;
        }
        stack_size = stack_size + 1;
        a[stack_size - 1] = val;
    }

    // Delete the topmost element from the stack O(1)
    void pop() {
        if(stack_size == 0) {
            cout << "Stack is empty!\n";
            return;
        }
        a[stack_size-1] = 0; // optional
        stack_size = stack_size - 1;
    }

    // Return the topmost element from the stack
    int top() {
        if(stack_size == 0) {
            cout << "Stack is empty!\n";
            return -1;
        }
        return a[stack_size-1];
    }
};

int main() {

    Stack st;
    st.push(5);
    cout << st.top() << "\n";
    st.push(6);
    st.push(7);
    st.pop();
    cout << st.top() << "\n";
}
