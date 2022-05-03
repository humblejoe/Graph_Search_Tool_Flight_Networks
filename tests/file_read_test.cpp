#include "../cs225/catch/catch.hpp"

#include "/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/file_read.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


// ADJACENCY MATRIX TESTS

TEST_CASE("vertices_sizecheck_small")
{
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/tests/testDataCleaning.txt");

    REQUIRE(test.getVertices().size() == 5);
}

TEST_CASE("vertices_sizecheck_large")
{
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/file.txt");

    REQUIRE(test.getVertices().size() == 456);
}

TEST_CASE("getEdge_small_1")
{
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/tests/testDataCleaning.txt");

    REQUIRE(test.getAdj()[2][1] == 200);

}

TEST_CASE("getEdge_small_2")
{
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/tests/testDataCleaning.txt");

    REQUIRE(test.getAdj()[2][4] == 600);
}

TEST_CASE("getEdge_small_3")
{
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/tests/testDataCleaning.txt");

    REQUIRE(test.getAdj()[1][0] == 100);
}

TEST_CASE("getEdge_large_1")
{
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/file.txt");

    REQUIRE(test.getAdj()[118][238] == 50);
}

TEST_CASE("getEdge_large_2")
{
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/file.txt");

    REQUIRE(test.getAdj()[407][411] == 310);
}

TEST_CASE("getEdge_large_3") 
{
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/file.txt");

    REQUIRE(test.getAdj()[382][91] == 235);
}

TEST_CASE("getEdge_large4")
{
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/file.txt");

    REQUIRE(test.getAdj()[444][455] == 265);
}

TEST_CASE("getEdge_large5")
{
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/file.txt");

    REQUIRE(test.getAdj()[269][398] == 37);
}


//ADJACENCY LIST TESTS

TEST_CASE("vertices_list_size_check_small")
{
    // tests that the amount of vertices in adjacency list is correct
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/tests/testDataCleaning.txt");

    REQUIRE(test.getAdjList().size() == 5);
}


TEST_CASE("edges_list_size_check_small")
{
    // tests that the amount of edges in adjacency list is correct
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/tests/testDataCleaning.txt");
    int edgeCount = 0;
    for (unsigned int i = 0; i < test.getAdjList().size(); i++) {
        edgeCount = edgeCount + test.getAdjList()[i].size();
    }
    //should be 12 total edges for this graph
    REQUIRE(edgeCount == 12);
}

TEST_CASE("vertices_list_size_check_large")
{
    // tests that the amount of vertices in adjacency list is correct
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/file.txt");

    REQUIRE(test.getAdjList().size() == 456);
}

TEST_CASE("edges_list_size_check_large")
{
    // tests that the amount of edges in adjacency list is correct
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/file.txt");
    unsigned int edgeCount = 0;
    for (unsigned int i = 0; i < test.getAdjList().size(); i++) {
        edgeCount = edgeCount + test.getAdjList()[i].size();
    }
    //should be 71959 total edges for this graph
    REQUIRE(edgeCount == 71959);
}


TEST_CASE("arbitrary_connections_small")
{
    //tests certain edges & weights to make sure they are correct
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/tests/testDataCleaning.txt");
    REQUIRE(test.getAdjList()[0][0].first == 1);
    REQUIRE(test.getAdjList()[0][0].second == 100);


    REQUIRE(test.getAdjList()[3][0].first == 0);
    REQUIRE(test.getAdjList()[3][0].second == 300);

    REQUIRE(test.getAdjList()[2][2].first == 4);
    REQUIRE(test.getAdjList()[2][2].second == 600);
}



TEST_CASE("arbitrary_connections_large")
{
    //tests certain edges & weights to make sure they are correct
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/file.txt");
    REQUIRE(test.getAdjList()[444][0].first == 1);
    REQUIRE(test.getAdjList()[444][0].second == 322);


    REQUIRE(test.getAdjList()[252][1].first == 3);
    REQUIRE(test.getAdjList()[252][1].second == 237);

    REQUIRE(test.getAdjList()[365][8].first == 32);
    REQUIRE(test.getAdjList()[365][8].second == 203);
}