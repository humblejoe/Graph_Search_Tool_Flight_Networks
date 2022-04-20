#include "../cs225/catch/catch.hpp"

#include "/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/file_read.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

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