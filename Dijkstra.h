#pragma once
#include "file_read.h"
#include "BFS.h"
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

class dijkstra{
    public:
    std::vector<int> shortestPath(std::vector<std::vector<int>> adj, int source, int destination);

    private:
    vector<int> path;
    vector<int> visited;

};