#include "file_read.h"
#include "Dijkstra.h"
#include "BFS.h"
#include <iostream>

vector<vector<pair<int, int>>> FormAdjList()
{
    
    
    // adjacency list.
    vector<vector<pair<int, int>>> adjList;

    //7 vertices so we make 7 rows.
    const int n = 7;

    for (int i = 0; i < n; i++)
    {
        // Create a vector to represent a row, and add it to the adjList.
        vector<pair<int, int>> row;
        adjList.push_back(row);
    }


    adjList[0].push_back(make_pair(1, 2));
    adjList[0].push_back(make_pair(2, 3));

    adjList[1].push_back(make_pair(0, 2));
    adjList[1].push_back(make_pair(5, 1));

    adjList[2].push_back(make_pair(0, 3));
    adjList[2].push_back(make_pair(5, 2));

    adjList[3].push_back(make_pair(1, 4));
    adjList[3].push_back(make_pair(4, 1));
    adjList[3].push_back(make_pair(6, 2));

    adjList[4].push_back(make_pair(3, 1));
    adjList[4].push_back(make_pair(5, 2));
    adjList[4].push_back(make_pair(6, 1));

    adjList[5].push_back(make_pair(1, 1));
    adjList[5].push_back(make_pair(2, 2));
    adjList[5].push_back(make_pair(4, 2));
    adjList[5].push_back(make_pair(6, 2));

    adjList[6].push_back(make_pair(3, 2));
    adjList[6].push_back(make_pair(4, 1));
    adjList[6].push_back(make_pair(5, 2));

   
    return adjList;
}


int main() 
    {
    file_Reader f;
    f.readingTextFile("file.txt");
    bfs s;
    //s.traversal();
    cout << "Dijkstra Shortest Path Algorithm started.\n";
    dijkstra d;


    // Construct the adjacency list that represents our graph. 
    vector< vector<pair<int, int> > > adjList = f.getAdjList();
    
    // Get a list of shortest path distances for node 0.
    int node = 0;
    vector<int> dist = d.DijkstraSP(adjList, node);
    
    // Print the list.
    d.PrintShortestPath(dist, node);
    
    cout << "Algorithm Succesful.\n";

    
    return 0;
    }
