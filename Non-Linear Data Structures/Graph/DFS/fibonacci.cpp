/*
int fibonacci(int n) {
    // base case
    if(n == 0) return 0;
    if(n == 1) return 1;

    // general case
    int num1 = fibonacci(n-1);
    int num2 = fibonacci(n-2);
    return num1 + num2;
}

void dfs(int node) {
    cout << node << "\n";

    // base case
    if node does not have any child:
        return

    // general case
    dfs(node.left_child);
    dfs(node.right_child);

    // general case
     for all childs of nodes:
        dfs(nodes);

}

/*
