# Implementations

## Chapter 1: Introduction to Algorithm Design

* [Adjacency List representation of Graphs](https://github.com/kyscg/PaperbackAlgorithms/blob/master/AlgorithmDesignManual/Implementations/adjListGraphs.cpp): C++ implementation of graph representation via adjacency lists. Takes in the number of vertices and edges and constructs an adjacency list by adding every edge to the dynamic array. Consumes lesser space than an adjacency matrix and adding vertices/edges is easier but querying is not.

* [Adjacency List representation of Weighted Graphs](https://github.com/kyscg/PaperbackAlgorithms/blob/master/AlgorithmDesignManual/Implementations/adjListWGraphs.cpp): C++ implementation of weighted graph representation via adjacency lists. We use a `vector` to store the initial node and a `pair` to store the terminal along with its weight.