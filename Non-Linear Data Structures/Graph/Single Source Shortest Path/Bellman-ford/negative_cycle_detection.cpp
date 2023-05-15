/*

    Input -> A weighted graph & a src node (with no negative cycle. but neg edge thakte pare)
    Output -> Shortest distance from src node to all other nodes.


    - create a distance array "d" with all values to infinity  // T.C: O(n) // S.C: O(n)
    - d[src] = 0 // T.C: O(1)

    - negative_cycle = false

    for i = 1 to n: // T.C: O(n)
        for all edge e(u, v, w): // T.C: O(m) or O(E) => O(n*m)
            // relax e
            - if d[u] + w < d[v] // T.C: O(1)
                - d[v] = d[u] + w // T.C: O(1)
                - if i == n:
                    negative_cycle = true

    = print whether negative cycle exists
    - print the distance array "d" // T.C: O(n)

*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
contst int INF = 1e9;

vector < pair<int, int> > adj_list[N];
int d[N];

int main() {

    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        d[i] = INF;
    }

    for(int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list.[u].push_back({v, w});
    }

    int src = 1;
    d[src] = 0;

    bool negative_cycle = false;

    for(int i = 1; i <= n; i++) {
        for(int node = 1; node <= n; node++) {
            for(pair<int,int> adj_node: adj_list[node]) {
                int u = node;
                int v = adj_node.first;
                int w = adj_node.second;

                if(d[u] + w < d[v]) {
                    d[v] = d[u] + w;
                    if(i == n) {
                        negative_cycle = true;
                    }
                }
            }
        }
    }

    if(negative_cycle == true) {
        cout << "Graph has negative cycle" << "\n";
    }
    else {
        for(int i = 1; i <= n; i++) {
        cout << d[i] << " ";
        }
    }

    cout << "\n";

return 0;
}
