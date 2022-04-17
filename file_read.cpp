#include <iostream>
#include <cstdlib>
#include "file_read.h"
#include <fstream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;


void file_Reader::readingTextFile(){
   std::ifstream in("file.txt");

   std::string line;
   while(std::getline(in, line)){
      if(line.size()>0){
         entire.push_back(line);
      }
   }
   in.close();
   for(unsigned int i = 0; i < entire.size();i++){
      //This adds an entra space after the line/sentece.
      std::string s= entire[i];
      char * token = strtok(const_cast<char*>(s.c_str())," ");
      int count = 1;

      while(token!= NULL){
         if(count%3 == 1){
            source.push_back(stoi(token));
         }
         else if(count%3 == 2){
            destination.push_back(stoi(token));
         }
         else{
            edge.push_back(stoi(token));
         }
         token = strtok(NULL, " ");
         count++;
      }
      
   }

   //We push the final line of code is used to push all the vertices and find the unique values
   //in sorted order to get the final list of vertices.
   
   vertices = source;
   std::sort(vertices.begin(), vertices.end());
   vertices.erase(std::unique(vertices.begin(), vertices.end()), vertices.end());
   int size = vertices.size();
   adj.resize(size, std::vector<int>(size));

   //Making the adjacency matrix.
   for(unsigned int i = 0; i< edge.size(); i++){
      adj[source[i]][destination[i]] = std::abs(edge[i]);
   }

   
   
    
}