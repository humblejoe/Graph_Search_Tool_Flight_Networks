#include<queue>
#include<vector>
#include<stack>
#include "BFS.h"
#include "file_read.h"
using namespace std;

void bfs::traversal(){
    //We need to get the adjacency matrix from the file reader class and initialise it.
    //Along with adjacency matrix, we also need the vector with all the unique values of the s.

    file_Reader f;
    std::vector<int> vertices = f.getVertices();
    std::vector< std::vector<int>> adj = f.getAdj();
    std::vector<int> path;

    //Inititalizing all the vertices to be not visited.
    for(unsigned int i = 0; i< vertices.size(); i++){
        visited[i] = 0;
    }


    std::queue<int> q;
    //Initializing the starting node for BFS. This is a general traversal algorithm.
    q.push(vertices[0]);

    //Initializing the path.
    path.push_back(0);

    visited[0] = 1;
    parent[0] = -1;

    while(!q.empty()){
        int curr = q.front();
        //Adding to the path.
        path.push_back(curr);
        q.pop();
        for(unsigned int i = 0; i <vertices.size(); i++){
            if(adj[curr][i] && !visited[i]){
                q.push(vertices[i]);
                parent[i] = curr;
            }
        }
    }

    //Printing the path
    for(unsigned int i =0; i< path.size(); i++){
        std::cout<<path[i]<<" ";
    }
    
}