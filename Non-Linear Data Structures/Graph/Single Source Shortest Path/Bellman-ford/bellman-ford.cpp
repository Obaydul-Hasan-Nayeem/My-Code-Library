/*
    if n nodes -> (n-1) iterations in bruteforce way relaxation

    PSEDUCODE
    =========

    n -> number of nodes in graph
    m -> number of edges in graph

    ---------------------------------
    We know,
        u ---> v
        d[u] + c(u,v) < d[v]
            => d[v] = d[u] + c(u,v)
    ----------------------------------

    Input -> A weighted graph & a src node (with no negative cycle. but neg edge thakte pare)
    Output -> Shortest distance from src node to all other nodes.


    - create a distance array "d" with all values to infinity  // T.C: O(n) // S.C: O(n)
    - d[src] = 0 // T.C: O(1)

    for i = 1 to n-1: // T.C: O(n)
        for all edge e(u, v, w): // T.C: O(m) or O(E) => O(n*m)
            // relax e
            - if d[u] + w < d[v] // T.C: O(1)
                d[v] = d[u] + w // T.C: O(1)

    - print the distance array "d" // T.C: O(n)

    ----------------------------------------
    Time Complexity: O(n) + O(1) + O(n*m) + O(n)
                    = O(n*m)
                    = O(|V| * |E|)


    Space Complexity: O(n)

    --------------------------------

    Limitations:
        - time complexity dijkstra er cheye beshi


    Negative Cycle Detection:
        - if output of (n-1)th iteration and nth iteration is same -> no neg cycle

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

    for(int i = 1; i <= n-1; i++) {
        for(int node = 1; node <= n; node++) {
            for(pair<int,int> adj_node: adj_list[node]) {
                int u = node;
                int v = adj_node.first;
                int w = adj_node.second;

                if(d[u] + w < d[v]) {
                    d[v] = d[u] + w;
                }
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        cout << d[i] << " ";
    }

    cout << "\n";

return 0;
}
