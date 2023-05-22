/*
    Types of path printing:
                    1. Negative cycle thakle
                    2. Negative cycle na thakle

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

    Input -> A weighted graph & a src node (with no negative cycle. but neg edge thakte pare) & a destination_node
    Output -> Shortest distance from src node to all other nodes.


    - create a distance array "d" with all values to infinity  // T.C: // S.C:
    - create a parent array
    - d[src] = 0 // T.C:

    - negative_cycle = false
    - last_updated_node = -1

    for i = 1 to n-1: // T.C:
        for all edge e(u, v, w): // T.C:
            // relax e
            - if d[u] + w < d[v] // T.C:
                - d[v] = d[u] + w // T.C:
                - parent[v] = u
                - if i == n:
                    - negative_cycle = true
                    - last_updated_node = v


    - if negative_cycle == false: // T.C: O(n)
        - print the distance array "d"
        - selected_node = destination_node
        - declare a vector path
        - while true:
            - path.push_back(selected_node)
            - if selected_node == src:
                break
            - selected_node = parent[selected_node]
            - reverse the vector path
            - print the path

    else: // T.C: O(n) + O(n) = O(n)
        - print negative cycle exists
        - selected_node = last_updated_node
        - for i = 1 to n-1: // T.C: O(n)
            - selected_node = parent[selected_node]
        - first_node = selected_node
        - declare a vector "cycle"
        - cycle.push_back(selected_node)
        - while true: // T.C: O(n)
            - selected_node = parent[selected_node]
            - cycle.push_back(seleected_node)
            - if selected_node == last_updated_node:
                - break
        - reverse the "cycle" vector
        - print the cycle


    ----------------------------------------
    Time Complexity: O(n*m)
    Space Complexity: O(n)
    --------------------------------
*/
