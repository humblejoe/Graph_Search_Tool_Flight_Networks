#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class file_Reader
{
public:
    void readingTextFile(string input);
    int getSize();
    std::vector<int> getVertices();
    std::vector<int> getEdges();
    std::vector<std::vector<int>> getAdj();
    std::vector<std::vector<pair<int, int>>> getAdjList();

private:
    std::vector<string> entire;
    std::vector<int> source;
    std::vector<int> destination;
    std::vector<int> edge;

    // This vector stores the vectors in sorted order.
    std::vector<int> vertices;
    std::vector<std::vector<int>> adj;
    std::vector<std::vector<pair<int, int>>> adjList;
};