#include <bits/stdc++.h>

using namespace std;

// template based stack using dynamic array
template <class T>
class Stack {
public:
    T *a;
    int stack_size;
    int array_cap;

    Stack() {
        a = new T[1];
        array_cap = 1;
        stack_size = 0;
    }

    void increase_size() {
        T *tmp;
        tmp = new T[array_cap*2];
        for(int i = 0; i < array_cap; i++) {
            tmp[i] = a[i];
        }
        swap(a, tmp);
        delete []tmp;
        array_cap = array_cap * 2;
    }

    T top() {
        if(stack_size == 0) {
            cout << "Stack is empty!\n";
            assert(false); // to crush the program. jehetu ekhane return type jani na, tai...

            /*
                Or,
                T a;
                return a;
            */

        }
        return a[stack_size - 1];
    }

    void push(T val) {
        if(stack_size + 1 > array_cap) {
            increase_size();
        }
        stack_size = stack_size + 1;
        a[stack_size - 1] = val;
    }

    void pop() {
        if(stack_size == 0) {
            cout << "Stack is empty!\n";
            return;
        }
//        a[stack_size-1] = 0;
        stack_size = stack_size - 1;
    }
};

int main() {
    Stack <double> st;
    st.push(3.5);
    st.push(5.6);
    st.pop();
    st.push(7.6);
    st.pop();
    st.pop();
  //  cout << st.top();

    Stack <char> st2;
    st2.push('a');
    st2.push('b');
    st2.pop();
//    st2.push('c');
    cout << st2.top();
}
