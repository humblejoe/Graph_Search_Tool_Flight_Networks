#include "file_read.h"
#include "BFS.h"
#include <algorithm>
#include <vector>
#include <queue>
#include "Dijkstra.h"
#include<climits>
#include "colors.h"
using namespace std;

vector<int> dijkstra::DijkstraSP(vector< vector<pair<int, int> > > &adjList, int &start)
    {
    // cout << "\nGetting the shortest path from " << start << " to all other nodes.\n";
    
    
    // Initialize all source->vertex as infinite.
    int n = adjList.size();
    for(int i = 0; i < n; i++)
        {
        dist.push_back(1000000007); // Define "infinity" 
        }
        
    // Create a PQ.
    priority_queue<pair<int, int>, vector< pair<int, int> >, greater<pair<int, int> > > pq;
    
    // Add source to pq, where distance is 0.
    pq.push(make_pair(start, 0));
    dist[start] = 0;
   
    parent.resize(adjList.size());
    parent[start] = -1;

    while(pq.empty() == false)
        {
        // Get min distance vertex from pq.
        int u = pq.top().first;
        pq.pop();
        
        // Visit all of u's neighbors. For each one (called v)
        for(size_t i = 0; i < adjList[u].size(); i++)
            {
            int v = adjList[u][i].first;
            int weight = adjList[u][i].second;
            
            // If the distance to v is shorter by going through u
            if(dist[v] > dist[u] + weight)
                {
                // Update the distance of v.
                dist[v] = dist[u] + weight;
                parent[v] = u;
                // Insert v into the pq. 
                pq.push(make_pair(v, dist[v]));
                }
            }

        }
    return dist;
    }
void dijkstra::PrintShortestPath(vector<int> &dist, int &start)
{
    cout << FCYN("\nPrinting the shortest paths for node ") << start << ".\n";
    for (unsigned long i = 0; i < dist.size(); i++)
    {
        cout << FGRN("The distance from node ") << start << FRED(" to node ") << i << FGRN(" is: ") << dist[i] << FRED("\t Path Taken: ");
        PrintPath(parent, i);
        std::cout << endl;
    }
    
}

void dijkstra::PrintPath(vector<int> par, int u) {
    if (par[u] == -1) {
        std::cout << u << " ";
        return;
    }
    PrintPath(parent, parent[u]);
    std::cout << u << " ";
}
    