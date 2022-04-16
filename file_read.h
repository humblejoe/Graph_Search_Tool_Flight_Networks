#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


class file_Reader{
    public: 
    
    void readingTextFile();
     
    private:
    std::vector<string> entire;
    std::vector<int> source;
    std::vector<int> destination;
    std::vector<int> edge;

};