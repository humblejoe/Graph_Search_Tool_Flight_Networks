#include <iostream>
#include <cstdlib>
#include "file_read.h"
#include <fstream>
#include <string>
#include <string.h>
#include <vector>
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
            std::cout<<stoi(token)<<" ";
         }
         else if(count%3 == 2){
            destination.push_back(stoi(token));
            std::cout<<stoi(token)<<" ";
         }
         else{
            edge.push_back(stoi(token));
            std::cout<<stoi(token)<<" ";
         }
         std::cout<<std::endl;
         token = strtok(NULL, " ");
         count++;
      }
      
   }

   std::cout<<entire.size()<<"This is the number of edges"<<std::endl;


   
    
}