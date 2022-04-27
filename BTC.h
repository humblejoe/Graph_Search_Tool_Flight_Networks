#pragma once
#include <vector>
#include <limits>
#include <algorithm>

class btc{
    public:
    int centrality(std::vector<std::vector<int>> adj);

    private:
    //This vector stores the number of times, each vertex falls in the shortest path between two vertices.
    std::vector<int> occur;


};