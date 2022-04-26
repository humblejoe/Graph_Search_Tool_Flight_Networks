#pragma once
#include "file_read.h"
#include "BFS.h"
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

class dijkstra{
    public:
    vector<int> DijkstraSP(vector< vector<pair<int, int> > > &adjList, int &start);
    void PrintShortestPath(vector<int> &dist, int &start);
    private:
    vector<int> dist;
    vector<bool> visited;

};