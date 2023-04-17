/*
    Time Complexity -> O(n^2)
    Space Complexity -> O(n^2)

    A----B
        / \
       C---D

    0----1
        / \
       2---3

    0 -> 1
    1 -> 0, 2, 3
    2 -> 1, 3
    3 -> 1, 2

*/


#include <bits/stdc++.h>

using namespace std;

// time: O(1) + O(1) + O(n^2) + O(n^2) = O(n^2)
// space: O(1) + O(n) + O(n^2) + O(n^2) = O(n^2)
int main() {

int nodes = 4; // O(1) // O(1)
vector<int> adj_list[nodes]; // O(1) // O(n)

// O(E * 2) -> O(E) -> in worst case: O(n^2)
adj_list[0] = {1};
adj_list[1] = {0, 2, 3};
adj_list[2] = {1, 3};
adj_list[3] = {1, 2};

for(int i = 0; i < nodes; i++) { // O(n^2) // O(n^2)
    cout << i << " -> ";
    for(int j = 0; j < adj_list[i].size(); j++) {
        cout << adj_list[i][j] << " ";
    }
    cout << "\n";
}

return 0;
}
