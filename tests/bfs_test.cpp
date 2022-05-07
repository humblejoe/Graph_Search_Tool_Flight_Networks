#include "../cs225/catch/catch.hpp"

#include "../file_read.h"
#include "../BFS.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

TEST_CASE("traversal_size_check_small")
{
    file_Reader test;
    test.readingTextFile("tests/testDataCleaning.txt");

    bfs b;

    std::vector<int> returnPath = b.traversal(0, test.getAdj());

    REQUIRE(test.getVertices().size() == 5);
}

TEST_CASE("traversal_size_check_large")
{
    file_Reader test;
    test.readingTextFile("file.txt");

    bfs b;

    std::vector<int> returnPath = b.traversal(0, test.getAdj());

    REQUIRE(test.getVertices().size() == 456);
}

TEST_CASE("traversal_small_0_start")
{
    file_Reader test;
    test.readingTextFile("tests/testDataCleaning.txt");

    bfs b;

    std::vector<int> returnPath = b.traversal(0, test.getAdj());

    std::vector<int> comparePath = {0, 1, 3, 2, 4};

    REQUIRE(returnPath == comparePath);
}

TEST_CASE("traversal_small_4_start")
{
    file_Reader test;
    test.readingTextFile("tests/testDataCleaning.txt");

    bfs b;

    std::vector<int> returnPath = b.traversal(4, test.getAdj());

    std::vector<int> comparePath = {4, 2, 3, 1, 0};

    REQUIRE(returnPath == comparePath);
}

TEST_CASE("traversal_medium_0_start")
{
    file_Reader test;
    test.readingTextFile("tests/testgraph_medium.txt");

    bfs b;

    std::vector<int> returnPath = b.traversal(0, test.getAdj());

    std::vector<int> comparePath = {0, 1, 2, 3, 4, 5, 6, 7};

    REQUIRE(returnPath == comparePath);
}

TEST_CASE("traversal_medium_7_start")
{
    file_Reader test;
    test.readingTextFile("tests/testgraph_medium.txt");

    bfs b;

    std::vector<int> returnPath = b.traversal(7, test.getAdj());

    std::vector<int> comparePath = {7, 5, 6, 1, 2, 3, 4, 0};

    REQUIRE(returnPath == comparePath);
}

TEST_CASE("traversal_medium_2_start")
{
    file_Reader test;
    test.readingTextFile("tests/testgraph_medium.txt");

    bfs b;

    std::vector<int> returnPath = b.traversal(2, test.getAdj());

    std::vector<int> comparePath = {2, 0, 5, 1, 3, 4, 7, 6};

    REQUIRE(returnPath == comparePath);
}
