/*
                               All Pair Shortest Path
    BFS         -> O(V+E)      O(V+E)*V = O(V^2 + EV) -> that is so big
    Dijkstra    -> O(V^2)        O(V^2)*V = O(V^3) -> that is so big
    Bellman-ford-> O(V^3)        O(V^3)*V = O(V^4) -> that is so big

    Floyd-Warshall is a incremental algorithm

PSEUDO CODE: Floyd-Warshall
===========

Input -> A weighted graph as an adjacency matrix
Output -> All pair shortest distance

Time Complexity: O(V^2) + O(V^3) = O(V^3) | where O(V^4) in bellman-ford
Space Complexity: O(V^2)

- create a distance matrix "d" where d[i][j] = x where there is a direct // T.C: O(V^2) // S.C: O(V^2)
    edge from node "i" to node "j" and the cost is "x"
- for all node "i" d[i][i] = 0
- for all nodes "i" & "j" where there isn't any direct edge from "i" to "j"
        d[i][j] = INF

- for all node "k" // T.C: O(V) // S.C: O(1)
    - for all node "u" // T.C: O(V) // S.C: O(1)
        - for all node "v" // T.C: O(V) // S.C: O(1)
            - d[u][v] = min(d[u][v], d[u][k] + d[k][v]) // T.C: O(V^3) // S.C: O(1)

- output all pair shortest distance "d"
*/


#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 3;
const INF = 1e9;
int d[N][N];

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            d[i][j] = INF;
        }
    }

    for(int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        d[u][v] = w;
    }

    for(int i = 1; i <= n; i++) {
        d[i][i] = 0;
    }

    for(int k = 1; k <= n; k++) {
        for(int u = 1; u <= n; u++) {
            for(int v = 1; v <= n; v++) {
                d[u][v] = min(d[u][v], d[u][k] + d[k][v]);
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << d[i][j] << " ";
        }
        cout << "\n";
    }

return 0;
}

