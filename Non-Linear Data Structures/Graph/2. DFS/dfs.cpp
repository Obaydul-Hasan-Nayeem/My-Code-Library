/*
    DFS (Depth First Search)
    =======================

    It uses recursive function.

    [IMAGE on this folder]
    preorder_DFS: 0, 1, 3, 4, 2, 5
    inorder_DFS: 5 1 0 3 2 4

    Types / Variants:
        <> inorder: f(left) > root > f(right)
        <> preorder: root > f(left) > f(right)
        <> postorder: f(left) > f(right) > root


    Time Complexity: O(V+E)
    Space Complexity: O(V)

    TYPES of NODES in DFS:
    1. Unvisited Node
    2. Paused Node
    3. Done Node

// PSEUDO CODE FOR TREE
void dfs(int node) {
    cout << node << "\n";

    // base case
    if node does not have any child:
        return

    // general case
    for all childs of node:
        dfs(child);
}


// PSEUDO CODE FOR GRAPH (tree er jonno o kaj korbe)
visited array
void dfs(int node) {

    cout << node << "\n";
    visited[node] = 1;

    for all adj_node of node:
        if visited[adj_node] == 0:
            dfs(adj_node)
}
    dfs(src)

*/


#include <bits/stdc++.h>

using namespace std;

const int N = 1e5;

int visited[N];

vector<int>adj_list[N];

/*
    adj_list[1] -> 2, 4, 5

*/


void dfs(int node) {
    cout << node << " ";
    visited[node] = 1;

    for(int adj_node: adj_list[node]) {
        if(visited[adj_node] == 0) {
            dfs(adj_node);
        }
    }
}

int main() {

    int nodes, edges;
    cin >> nodes >> edges;

    for(int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src = 0;
    dfs(src);

return 0;
}

/*
SAMPLE TEST CASE-1:

    0 --- 1 --- 2 ---- 3
          |     |
          |     |
          5 --- 4

    # of node -> 6
    # of edge -> 6

    list of adj nodes ->
    6 6

    0 1
    1 2
    2 3
    1 5
    2 4
    5 4

    Output: 0 1 2 3 4 5


SAMPLE TEST CASE-2:

    0 --- 1     2 ---- 3
          |     |
          |     |
          5 --- 4

    # of node -> 6
    # of edge -> 5

    list of adj nodes ->
    6 5

    0 1
    2 3
    1 5
    2 4
    5 4

    Output: 0 1 5 4 2 3
*/
