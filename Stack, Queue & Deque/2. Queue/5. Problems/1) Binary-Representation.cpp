/*
    print binary representation from 1 to n using queue.

input = 10
explanation:
1 -> 1
2 -> 10 [1 + 0]
3 -> 11 [1 + 1]
4 -> 100 [10 + 0]
5 -> 101 [10 + 1]
6 -> 110 [11 + 0]
7 -> 111 [11 + 1]
8 -> 1000 [100 + 0]
9 -> 1001 [100 + 1]
10 -> 1010 [101 + 0]

*/

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    queue<string> q;
    q.push("1");
    for(int i = 1; i <= n; i++) {
        cout << "Binary Representation of " << i << " is: " << q.front() << "\n";
        string tmp = q.front();
        q.pop();
        q.push(tmp + "0");
        q.push(tmp + "1");
    }
return 0;
}
