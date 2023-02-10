#include <bits/stdc++.h>

using namespace std;

class Stack {
public:
    int *a;
    int stack_size;
    int array_cap;

    Stack() {
        a = new int[1];
        array_cap = 1;
        stack_size = 0;
    }

    // Make the array cap multiplied by 2
    void increase_size() {
        int *temp;
        temp = new int[array_cap*2];
        for(int i = 0; i < array_cap; i++) {
            temp[i] = a[i];
        }
        swap(a, temp);
        delete []temp;
        array_cap = array_cap * 2;
    }

    // Add an element in the top O(1)
    void push(int val) {
        if(stack_size+1 > array_cap) {
            increase_size();
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
    st.push(7);
    st.push(7);
    st.pop();
    cout << st.top() << "\n";

}
