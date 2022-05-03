#pragma once
#include<queue>
#include<vector>
#include<stack>
#include "file_read.h"
using namespace std;

class bfs : public file_Reader{
    public:
    //This is the adjacency matrix.
    vector<vector<int>> adj;

    //This vector marks all the points which have been visited in a graph traversal. 
    //'0' implied that the vertex has not been visited. '1' implies that the vertex has been visited.
    vector<int> visited;

    //This vector stores the predecessor or the parent of each of the node in bfs.
    vector<int> parent;

    std::vector<int> traversal(int start, std::vector< std::vector<int>> adj);
    void PrintShortestPath(vector<vector<int>> &dist, int &start);
};