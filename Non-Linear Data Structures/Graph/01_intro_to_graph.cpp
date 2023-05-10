/*
Graph Data Structure & Algorithm
    <> Elements: node/vertex, edge, graph

    <> Uses:
      - shortest path

    <> Terms:
        > Self Loop: kono node theke edge ber hoye abr oi node ei dhukle
        > Multi Edge: 2ta node er moddhe akadhik edge

    <> Variations
        > Weighted vs Unweighted
            - edge e value deya thakle vs na thakle
        > Directed vs Undirected / Directional Graph
            - tir chinho deya thakle vs na thakle
        > Bipartite Graph
            - 2ta partition e vag thakbe
            - nijeder moddhe kono edge thakbe na
                if n nodes, maximum number of edges = (n/2) * (n/2)
        > Complete Graph
            - joto gulo node ache tader shobar sathe shobar ekekta edge thakbe.

            if n = nodes, then edge = (n*(n-1))/2

        > Tree
            - no cycle
            - connected
            - unique path [ak node theke onno tay jete only akta path e thakbe]
            > Variations of Tree:
                > Rooted
                > Unrooted

        > DAG (Directed Acyclic Graph)
            - direction thakbe
            - cycle thaka jabe na

    <> Graph Representation:
        > Types:
            i. Adjacency Matrix
            ii. Adjacency List
            iii. Edge List

        > Rules:  (adjacency matrix)
         i node theke j node e direct connection thakle,
            matrix[i][j] = 1 [for unweighted graph]
            matrix[i][j] = weight of i,j [for weighted graph]

        > Adjacency List is better than Adj. matrix as complexity (jodi graph ta sparse hoy).

*/
