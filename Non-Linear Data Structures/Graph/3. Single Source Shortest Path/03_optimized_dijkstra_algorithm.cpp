/*
     Pseudo Code
     ===========

    input -> a weighted graph and a source
    output -> distance of all nodes from the source

    - create a distance array "d"
    - initialize all values of "d" to infinity // T.C: O(n)
    - d[src] = 0
    - create a visited array and mark all node as unvisited // T.C: O(n)
    - take an empty reverse priority queue "pq"
    - pq.push({0, src})

    - while the priority queue is not empty: // T.C: O(E)
            - head_distance, head = pq.front() [pick the node with the minimum distance value]
            - pq.pop() // T.C: O(log E)
            - if visited[head] == 1: ignore
            - visited[node] = 1 // T.C: O(1)
            - for all adj_node of node: // T.C: O(E)
                - if d[head] + c(head, adj_node)
                    - d[adj_node] = d[head] + c(head, adj_node)
                    - pq.push({ d[adj_node], adj_node }); // T.C: O(log E)

    - output array "d"


    Time Complexity:
        O(n) + O(E log E) + O(E log E)
        = O(E log E)
        = O(|E| log |E|)    [|E| means number of edge]
        = O(|E| log |V^2|)  [E means V^2]
        = O(2|E| log |V|)
        = O(|E| log |V|)  [log er base 2]
        [normally log er base 10. but programming e beshirvag khetre 2]

        So, Optimized Time Complexity: O(n^2) -> O(E log V) or, O(m log n)
            sparse graph er jonno ai optimized algorithm ta better

    Space Complexity: O(n) -> O(E)
*/
