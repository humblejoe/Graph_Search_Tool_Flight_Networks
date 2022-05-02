#include "../cs225/catch/catch.hpp"

#include "/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/file_read.h"
#include "/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/BFS.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

TEST_CASE("traversal_size_check_small")
{
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/tests/testDataCleaning.txt");

    bfs b;

    std::vector<int> returnPath = b.traversal(0, test.getAdj());

    REQUIRE(test.getVertices().size() == 5);
}

TEST_CASE("traversal_size_check_large")
{
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/file.txt");

    bfs b;

    std::vector<int> returnPath = b.traversal(0, test.getAdj());

    REQUIRE(test.getVertices().size() == 456);
}

TEST_CASE("traversal_small_0_start")
{
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/tests/testDataCleaning.txt");

    bfs b;

    std::vector<int> returnPath = b.traversal(0, test.getAdj());

    std::vector<int> comparePath = {0, 1, 3, 2, 4};

    REQUIRE(returnPath == comparePath);
}

TEST_CASE("traversal_small_4_start")
{
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/tests/testDataCleaning.txt");

    bfs b;

    std::vector<int> returnPath = b.traversal(4, test.getAdj());

    std::vector<int> comparePath = {4, 2, 3, 1, 0};

    REQUIRE(returnPath == comparePath);
}


