/*
    Operations:
        push() -> enqueue
        pop() -> dequeue
        front()
        empty()
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    queue<int> q;

    // enqueue
    q.push(5);
    q.push(6);
    q.push(7);

    cout << "Size=" << q.size() << "\n";
    cout << q.front() << "\n";

    q.pop();

    cout << "Size=" << q.size() << "\n";
    cout << q.front() << "\n";

    queue<char> q2;
    q2.push('a');
    cout << q2.front();

return 0;
}
