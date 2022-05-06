#include "file_read.h"
#include "Dijkstra.h"
#include "BFS.h"
#include "BTC.h"
#include <iostream>
#include "colors.h"
using namespace std;

int main()
{
    std::cout << FRED("Welcome to the SegFools Final Project. Please enter the desired graph in 'custom.txt': (Starting node), (Destination node), (Edge weight) ") << std::endl;

    std::cout << endl;

    file_Reader custom;
    custom.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/custom.txt");
    bfs bfs_graph_traversal;
    vector<vector<int>> adjM = custom.getAdj();
    int node = 0;
    std::cout << FYEL("Please enter the starting node for BFS: ");
    std::cin >> node;
    if (node <= (int(custom.getAdj().size()) - 1) && node >= 0) {
    bfs_graph_traversal.PrintShortestPath(adjM, node);
    std::cout << endl;

    std::cout << FGRN("Enter the staring node for Dijkstra: ");
    std::cin >> node;

    dijkstra d;
    vector<vector<pair<int, int>>> adjList = custom.getAdjList();

    vector<int> dist = d.DijkstraSP(adjList, node);
    d.PrintShortestPath(dist, node);
    std::cout << endl;

    btc test;
    int central = test.centrality(custom.getAdj());
    std::cout << FMAG("The most central node in this graph is: ") << central << std::endl;
    } else {
        throw std::runtime_error("Node not present in graph.");
    }
    return 0;
}
