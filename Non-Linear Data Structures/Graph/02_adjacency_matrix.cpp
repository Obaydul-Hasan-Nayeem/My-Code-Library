/*
    Adjacency Matrix: 2D array
    ---------------------
    Time Complexity -> O(n^2)
    Space Complexity -> O(n^2)

    A----B
        / \
       C---D

    0----1
        / \
       2---3

    total nodes = 4
    total edge = 4
    undirected + unweighted

    matrix -> num of nodes * num of nodes
           -> 4*4
    matrix[i][j] = 1
        if and only if there is single edge between i and j (i ->j)

    0 -> 1
    1 -> 0

    1 -> 2
    2 -> 1

    1 -> 3
    3 -> 1

    2 -> 3
    3 -> 2

output:
    0 1 0 0
    1 0 1 1
    0 1 0 1
    0 1 1 0
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

    int nodes = 4; // O(1)

    int matrix[nodes][nodes];

    for(int i = 0; i < nodes; i++) { // O(n^2)
        for(int j = 0; j < nodes; j++) {
            matrix[i][j] = 0;
        }
    }

    matrix[0][1] = 1; // O(1), but total will be = O(n^2) [for max nodes / worst case]
    matrix[1][0] = 1;

    matrix[1][2] = 1;
    matrix[2][1] = 1;

    matrix[1][3] = 1;
    matrix[3][1] = 1;

    matrix[2][3] = 1;
    matrix[3][2] = 1;

    for(int i = 0; i < nodes; i++) { // O(n^2)
        for(int j = 0; j < nodes; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

return 0;
}



