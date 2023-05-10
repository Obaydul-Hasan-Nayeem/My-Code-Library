/*

    Relaxation: kono akta node diye r akta node
                    er distance komanor try kora.


    u -> v [jodi u theke v te akta edge thake]
        if -> d[u] + c(u,v) < d[v]
            then -> d[v] = d[u] + c(u,v)

    Here,
    d[u] = src theke u te jaowar distance
    d[v] = src theke v te jaowar distance
    c(u,v) = u theke v te jaowar distance


    Pseudo Code
    ===========

    Space Complexity: O(n) + O(n) + O(1) = O(n)
    Time Complexity: O(n) + O(n) + O(n^2) + O(E)
                    = O(n^2) + O(E)
                    = O(n^2) + O(n^2)
                    = O(n^2)

    input -> a weighted graph and a source
    output -> distance of all nodes from the source

    - create a distance array "d" // Space Complexity: O(n)
    - initialize all values of "d" to infinity // T.C: O(n)
    - d[src] = 0
    - create a visited array and mark all node as unvisited // S.C: O(n), T.C: O(n)

    - for i = 0 to n - 1: // S.C: O(1), T.C: O(n)
            - pick the "unvisited" node with the minimum d[node] // T.C: O(n) -> O(n^2)
            - visited[node] = 1 // T.C: O(1)
            - for all adj_node of node: // T.C: O(m) / O(E) (for below 3 lines)
                - if d[node] + c(node, adj_node)
                    - d[adj_node] = d[node] + c(node, adj_node)
    - output array "d"


      Limitation of Dijkstra:
        - kichu kichu negative weighted graph er khetre wrong output dey.
        - negative cycle thakle final distance minus infinitive hoye jay
                (negative cycle means negative weight jukto edge er graph)
      Solution for this Limitation:
        Bellman-ford Algorithm
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
const int INF = 1e9;
// const long long int = 1e18;

int nodes, edges;

vector< pair<int,int> >adj_list[N];

int d[N], visited[N];

dijkstra(int src) {
    for(int i = 1; i <= nodes; i++) {
        d[i] = INF;
    }
    d[src] = 0;

    for(int i = 0; i < nodes; i++) {
        int selected_node = -1;
        for(int j = 1; j <= nodes; j++) {
            if(visited[j] == 1) continue;
            if(selected_node == -1 || d[selected_node] > d[j]) {
                selected_node = j;
            }
        }
        visited[selected_node] = 1;

        for(auto adj_entry: adj_list[selected_node]) {
            int adj_node = adj_entry.first;
            int edge_cst = adj_entry.second;

            if(d[selected_node] + edge_cst < d[adj_node]) {
                d[adj_node] = d[selected_node] + edge_cst;
            }
        }
    }
}

int main() {

    cin >> nodes >> edges;

    for(int i = 0; i < edges; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v,w});
        adj_list[v].push_back({u,w});
    }

    int src = 1;
    dijkstra(src);

    for(int i = 1; i <= nodes; i++) {
        cout << d[i] << " ";
    }

    cout << endl;

return 0;
}

