#include "filereader.h"
#include "file_Read.h"

#include <iostream>


int main()
{
    fileReader test;
    file_Reader temp;
    temp.readingTextFile("/workspaces/CS225/cs225git/calewis5-mmalysa2-akales3-mkumar41/tests/testDataCleaning.txt");

    std::cout << temp.getAdj()[0][3] << std::endl;

    return 0;
}




