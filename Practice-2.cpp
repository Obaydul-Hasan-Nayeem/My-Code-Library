#include <bits/stdc++.h>

using namespace std;

template<typename T>
class Stack {
    private:
        int top;
        T data[100];

    public:
        Stack() {
            top = -1;
        }

        void push(T value) {
            top++;
            data[top] = value;
        }

        T pop() {
            T value = data[top];
            top--;
            return value;
        }
};

int main() {
    Stack<char> charStack;
    Stack<int> intStack;
    Stack<float> floatStack;

    charStack.push('A');
    intStack.push(123);
    floatStack.push(3.14);

    char c = charStack.pop();
    int i = intStack.pop();
    float f = floatStack.pop();

    cout << c << endl;
    cout << i << endl;
    cout << f << endl;

    return 0;
}
