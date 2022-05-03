#include "../cs225/catch/catch.hpp"

#include "/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/file_read.h"
#include "/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/BTC.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

TEST_CASE("btc_test_small")
{
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/tests/testDataCleaning.txt");

    btc b;

    int central = b.centrality(test.getAdj());

    REQUIRE(central == 0);
}

TEST_CASE("btc_test_medium")
{
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/tests/testDataCleaning.txt");

    btc b;

    int central = b.centrality(test.getAdj());

    REQUIRE(central == 0);
}

TEST_CASE("btc_test_btcgraph")
{
    file_Reader test;
    test.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/tests/btcgraph.txt");

    btc b;

    int central = b.centrality(test.getAdj());

    REQUIRE(central == 4);
}