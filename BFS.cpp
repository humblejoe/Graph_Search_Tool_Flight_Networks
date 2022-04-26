#include<queue>
#include<vector>
#include<stack>
#include "BFS.h"
#include "file_read.h"
using namespace std;

void bfs::traversal(int start, std::vector< std::vector<int>> adj){
    //We need to get the adjacency matrix from the file reader class and initialise it.
    //Along with adjacency matrix, we also need the vector with all the unique values of the s.

    
    int size = adj.size();
    std::vector<int> path;

    //Inititalizing all the vertices to be not visited.
    for(unsigned int i = 0; i< size; i++){
        visited[i] = 0;
    }


    std::queue<int> q;
    //Initializing the starting node for BFS. This is a general traversal algorithm.
    q.push(start);

    //Initializing the path.
    path.push_back(start);

    visited[start] = 1;
    parent[start] = -1;
    std::cout<<"printing things before the while loop"<<std::endl;
    while(!q.empty()){
        int curr = q.front();
        //Adding to the path.
        path.push_back(curr);
        q.pop();
        for(unsigned int i = 0; i <size; i++){
            if(adj[curr][i] && !visited[i]){
                q.push(i);
                parent[i] = curr;
            }
        }
    }

    //Printing the path
    for(unsigned int i =0; i< path.size(); i++){
        std::cout<<path[i]<<" ";
    }
    
}