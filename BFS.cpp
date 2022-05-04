#include <queue>
#include <vector>
#include <stack>
#include <limits>
#include "BFS.h"
#include "file_read.h"
#include "colors.h"

using namespace std;

std::vector<int> bfs::traversal(int start, std::vector<std::vector<int>> adj)
{
    // We need to get the adjacency matrix from the file reader class and initialise it.
    // Along with adjacency matrix, we also need the vector with all the unique values of the s.

    unsigned int size = adj.size();
    std::vector<int> path;
    visited.resize(size);
    parent.resize(size);

    // Inititalizing all the vertices to be not visited.
    for (unsigned int i = 0; i < size; i++)
    {
        visited[i] = 0;
    }

    int a = std::numeric_limits<int>::max();
    for (unsigned int i = 0; i < size; i++)
    {
        adj[i][i] = a;
    }

    std::queue<int> q;
    // Initializing the starting node for BFS. This is a general traversal algorithm.
    q.push(start);


    visited[start] = 1;
    parent[start] = -1;
    
    while (!q.empty())
    {
        int curr = q.front();

        // Adding to the path.
        path.push_back(curr);
        q.pop();
        for (unsigned int i = 0; i < size; i++)
        {
            if (adj[curr][i] != a && !visited[i])
            {
                q.push(i);
                parent[i] = curr;
                visited[i] = 1;
            }
        }
    }

    return path;
}
void bfs::PrintShortestPath(vector<vector<int>> &dist, int &start)
{
    std::vector<int> path = traversal(start, dist);
    cout << "\nPrinting the traversal for BFS from node: " << start << ".\n";
    for (unsigned long i = 0; i < dist.size(); i++)
    {
        std::cout << path[i] << " ";
    }
    std::cout << endl;
}