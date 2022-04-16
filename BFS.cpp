#include<queue>
#include<vector>
#include<stack>
using namespace std;

void BFS::traversal(){
    //We need to get the adjacency matrix from the file reader class and initialise it.
    //Along with adjacency matrix, we also need the vector with all the unique values of the s.

    std::vector<int> v =file_read.source;

    //Inititalizing all the vertices to be not visited.
    for(int i = 0; i<v.size(); i++){
        visited[i] = 0;
    }


    std::queue<int> q;
    q.push(vert[0]);
    visited[0] = 1;
    
    //Initialising the starting node of bfs.
    q.push()vert
}