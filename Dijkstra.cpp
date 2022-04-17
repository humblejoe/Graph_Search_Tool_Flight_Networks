#include "file_read.h"
#include "BFS.h"
#include <algorithm>
#include <vector>
#include <queue>
#include "Dijkstra.h"
using namespace std;


std::vector<int> dijkstra::shortestPath(std::vector<std::vector<int>> adj, int source, int destination){
    //This is a normal priority queue. We will multiply everything by -1 to get the values of the 
    std::priority_queue<int> pq;
    
    //This stores the number of vertices.
    int size = adj.size();
    visited.resize(size);
    
    //Initializing all the visted nodes to 0;
    for(unsigned int i = 0; i<size; i++){
        visited[i] = 0;
    }
    
}