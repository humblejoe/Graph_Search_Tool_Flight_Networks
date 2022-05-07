#include "../cs225/catch/catch.hpp"

#include "../file_read.h"
#include "../Dijkstra.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

TEST_CASE("dijkstra_test_small_1")
{
    file_Reader test;
    test.readingTextFile("tests/testDataCleaning.txt");

    dijkstra d;

    vector<vector<pair<int, int>>> adjList = test.getAdjList();

    int start = 0;
    vector<int> dist = d.DijkstraSP(adjList, start);

    //  SHORTEST DISTANCE FROM START TO NODE N IS GIVEN AT DIST[N].
    REQUIRE(dist[4] == 800);
}

TEST_CASE("dijkstra_test_small_2")
{
    file_Reader test;
    test.readingTextFile("tests/testDataCleaning.txt");

    dijkstra d;

    vector<vector<pair<int, int>>> adjList = test.getAdjList();

    int start = 3;
    vector<int> dist = d.DijkstraSP(adjList, start);

    //  SHORTEST DISTANCE FROM START TO NODE N IS GIVEN AT DIST[N].
    REQUIRE(dist[4] == 500);
}

TEST_CASE("dijkstra_test_small_3")
{
    file_Reader test;
    test.readingTextFile("tests/testDataCleaning.txt");

    dijkstra d;

    vector<vector<pair<int, int>>> adjList = test.getAdjList();

    int start = 0;
    vector<int> dist = d.DijkstraSP(adjList, start);

    //  SHORTEST DISTANCE FROM START TO NODE N IS GIVEN AT DIST[N].
    REQUIRE(dist[2] == 300);
}

TEST_CASE("dijkstra_test_medium_1")
{
    file_Reader test;
    test.readingTextFile("tests/testgraph_medium.txt");

    dijkstra d;

    vector<vector<pair<int, int>>> adjList = test.getAdjList();

    int start = 0;
    vector<int> dist = d.DijkstraSP(adjList, start);

    //  SHORTEST DISTANCE FROM START TO NODE N IS GIVEN AT DIST[N].
    REQUIRE(dist[7] == 3100);
}

TEST_CASE("dijkstra_test_medium_2")
{
    file_Reader test;
    test.readingTextFile("tests/testgraph_medium.txt");

    dijkstra d;

    vector<vector<pair<int, int>>> adjList = test.getAdjList();

    int start = 1;
    vector<int> dist = d.DijkstraSP(adjList, start);

    //  SHORTEST DISTANCE FROM START TO NODE N IS GIVEN AT DIST[N].
    REQUIRE(dist[4] == 1210);
}

TEST_CASE("dijkstra_test_medium_3")
{
    file_Reader test;
    test.readingTextFile("tests/testgraph_medium.txt");

    dijkstra d;

    vector<vector<pair<int, int>>> adjList = test.getAdjList();

    int start = 3;
    vector<int> dist = d.DijkstraSP(adjList, start);

    //  SHORTEST DISTANCE FROM START TO NODE N IS GIVEN AT DIST[N].
    REQUIRE(dist[5] == 3100);
}

