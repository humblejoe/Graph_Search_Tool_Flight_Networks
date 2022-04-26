#include "BTC.h"
#include <algorithm>

int btc::centrality(std::vector<std::vector<int>> adj){
    //Initializing the diagonal elements of the vector to '0';
    for(unsigned int i = 0; i< adj.size(); i++){
        adj[i][i] = 0;
    }
    //The variable 'size' stores the number of vertices in the graph.
    unsigned int size = adj.size();

    //The below code updates the distances of the vertices from each other.
    for(unsigned int k =0; k< size; k++){
        for(unsigned int u = 0; u < size; u++){
            for(unsigned int v = 0; v < size; v++){
                if(adj[u][v]> adj[u][k] + adj[k][v]){
                    adj[u][v] = adj[u][k] + adj[k][v];
                }
            }
        }
    }



    return -1;
}