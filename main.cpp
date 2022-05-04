#include "file_read.h"
#include "Dijkstra.h"
#include "BFS.h"
#include "BTC.h"
#include <iostream>
#include "colors.h"
using namespace std;

int main()
{

    // std::cout << FRED("Welcome to the SegFools Final Project. Please enter a traversal to do on the Airline travel reachability network Dataset: ") << std::endl;
    // std::cout << FCYN("BFS, Dijkstra, Betweeness Centrality ") << std::endl;
    // std::cout << "Enter here: ";
    // std::string bfs_input;
    // std::cin >> bfs_input;
    // if (bfs_input == "BFS")
    // {
    //     file_Reader f;
    //     f.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/tests/testDataCleaning.txt");
    //     bfs bfs_graph_traversal;
    //     vector<vector<int>> adjM = f.getAdj();
    //     int node = 0;
    //     bfs_graph_traversal.PrintShortestPath(adjM, node);
    // }

    // // btc test;

    // // int central = test.centrality(f.getAdj());

    // // std::cout << central << std::endl;
    file_Reader f;
    f.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/tests/testgraph_medium.txt");
    cout << "Dijkstra Shortest Path Algorithm started.\n";
    dijkstra d;

    //Construct the adjacency list that represents our graph.
    vector< vector<pair<int, int> > > adjList = f.getAdjList();

    //Get a list of shortest path distances for node 0.
    int node = 0;
    vector<int> dist = d.DijkstraSP(adjList, node);
    //Print the list.
    d.PrintShortestPath(dist, node);

    cout << "Algorithm Succesful.\n";

    return 0;
}
