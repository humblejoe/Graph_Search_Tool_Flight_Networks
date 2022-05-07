#include "../cs225/catch/catch.hpp"

#include "../file_read.h"
#include "../BTC.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

TEST_CASE("btc_test_small")
{
    file_Reader test;
    test.readingTextFile("tests/testDataCleaning.txt");

    btc b;

    int central = b.centrality(test.getAdj());

    REQUIRE(central == 0);
}

TEST_CASE("btc_test_medium")
{
    file_Reader test;
    test.readingTextFile("tests/testDataCleaning.txt");

    btc b;

    int central = b.centrality(test.getAdj());

    REQUIRE(central == 0);
}

TEST_CASE("btc_test_btcgraph")
{
    file_Reader test;
    test.readingTextFile("tests/btcgraph.txt");

    btc b;

    int central = b.centrality(test.getAdj());

    REQUIRE(central == 4);
}