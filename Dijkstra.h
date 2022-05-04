#pragma once
#include "file_read.h"
#include "BFS.h"
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

class dijkstra : public file_Reader
{
public:
    vector<int> DijkstraSP(vector<vector<pair<int, int>>> &adjList, int &start);
    void PrintShortestPath(vector<int> &dist, int &start);
    void PrintPath(vector<int> par, int u);

private:
    vector<int> parent;
    vector<int> dist;
    vector<bool> visited;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
};