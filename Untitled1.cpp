#include<bits/stdc++.h>

using namespace std;

stack<int> sortStack(stack<int> &originalStack) {
    stack<int> sortedStack;
    while (!originalStack.empty()) {
        int temp = originalStack.top();
        originalStack.pop();
        while (!sortedStack.empty() && sortedStack.top() > temp) {
            originalStack.push(sortedStack.top());
            sortedStack.pop();
        }
        sortedStack.push(temp);
    }
    return sortedStack;
}

int main() {
    stack<int> originalStack;
    originalStack.push(5);
    originalStack.push(2);
    originalStack.push(6);
    originalStack.push(4);
    originalStack.push(3);
    stack<int> sortedStack = sortStack(originalStack);
    cout << "Sorted stack is: ";
    while (!sortedStack.empty()) {
        cout << sortedStack.top() << " ";
        sortedStack.pop();
    }
    return 0;
}
