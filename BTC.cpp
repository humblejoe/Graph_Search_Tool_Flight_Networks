#include "BTC.h"
#include <vector>
#include <algorithm>

int btc::centrality(std::vector<std::vector<int>> adj){
    //Initializing the diagonal elements of the vector to '0';
    for(unsigned int i = 0; i< adj.size(); i++){
        adj[i][i] = 0;
    }
    //The variable 'size' stores the number of vertices in the graph.
    unsigned int size = adj.size();
    
    //The vector below stores '-1' if there is a direct path, else intermediate vertex which falls in the path.
    std::vector<std::vector<int>> intermediate;
    intermediate.resize(size, std::vector<int>(size));

    //'a' stores the value infinity. 
    int a = std::numeric_limits<int>::max();

    //Initialising all the initial intermdeiate values/next step in the matrix.
    for(unsigned int i =0; i< size; i++){
        for(unsigned int j = 0; j <size; j++){
            if(adj[i][j]==a){
                intermediate[i][j] = -1;
            }
            else{
                intermediate[i][j] = j;
            }
        }
    }

    

    //The below code updates the distances of the vertices from each other.
    for(unsigned int k =0; k< size; k++){
        for(unsigned int u = 0; u < size; u++){
            for(unsigned int v = 0; v < size; v++){
                //The first condition just checks that there should not be any infinite intermediate path to the vertices.
                if(adj[u][k]!=a && adj[k][v]!= a){
                    if(adj[u][v]> adj[u][k] + adj[k][v]){
                        adj[u][v] = adj[u][k] + adj[k][v];
                        intermediate[u][v] = intermediate[u][k]; 
                    }
                }
            }
        }
    }

    occur.resize(size);
    //Initializing all the occurences to 0.
    for(unsigned int i = 0; i< size; i++){
        occur[i] = 0;
    }

    //Calculating the shortest path from each vertext to another veertex.
    for(unsigned i = 0; i < size; i++){
        for(unsigned j = 1; j< size; j++){
            if(intermediate[i][j]==-1){
                continue;
            }
            else{
                //Two calculate the betweenness centrality we are only taking the intermediate vertices not the source and destination.
                unsigned int temp = i;
                while(temp!=j){
                    occur[temp]++;
                    temp = intermediate[temp][j];
                }
            }
        }
    }

    int max  = -1;
    int index = -1;
    for(unsigned int i = 0; i <size; i++){
        if(occur[i]>max){
            max = occur[i];
            index = i;
        }
    }



    return index;
}