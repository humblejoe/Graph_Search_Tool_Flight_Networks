#include <iostream>
#pragma once
#include <cstdlib>

#include <fstream>
#include <string>
#include <vector>
using namespace std;


void fileReader::readingTextFile(){
   std::ifstream in('file.txt');

   std::string line;
   while(std::getline(in, line)){
      if(line.size()>0){
         entire.push_back(line);
      }
   }
   in.close();
   for(unsigned int i = 0; i < entire.size();i++){
      char * token = strtok(entire[i]," ");
      int count = 1;
      //Stores the maximum node id.
      int max;

      while(token!= NULL){
         if(count==1){
            source.push(token);
         }
         else if(count == 2){
            destination.push(token);
         }
         else{
            edge.push(token);
         }
         token = strtok(NULL, " ");
         count++;
      }
      
   }
   
    
}