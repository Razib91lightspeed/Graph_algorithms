# Graph Traversal Algorithms in C++

This repository contains the implementation of Breadth-First Search (BFS) and Depth-First Search (DFS) algorithms in C++. These algorithms are fundamental for graph traversal and are used for searching a graph or tree data structure. The project provides a demonstration of both algorithms using an undirected graph.

## BFS and DFS Overview

- **Breadth-First Search (BFS)** explores the graph level by level and is implemented using a queue data structure.
- **Depth-First Search (DFS)** explores the graph by going as deep as possible before backtracking and is implemented using a stack data structure.

## Code Structure

The code consists of:
- A `main()` function where the graph is represented as an adjacency list and both BFS and DFS functions are called.
- A `bfs()` function that performs the BFS algorithm starting from a given node.
- A `dfs()` function that performs the DFS algorithm starting from a given node.

## How to Run

1. Ensure you have a C++ compiler installed on your system.
2. Compile the code using the following command (example for g++ compiler):

    ```bash
    g++ -o graph_traversal graph_traversal.cpp
    ```

3. Run the executable:

    ```bash
    ./graph_traversal
    ```

The output will display the order of nodes visited using both BFS and DFS starting from node `0`.

## Author
- Razib Hasan
