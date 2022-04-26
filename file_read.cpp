#include <iostream>
#include <cstdlib>
#include "file_read.h"
#include <fstream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <limits>
#include <stdexcept>
using namespace std;

void file_Reader::readingTextFile(string input)
{
   std::ifstream in(input);

   if (!in.is_open()) {
      throw std::runtime_error("failed to open file");
   } else {
      std::cout << "file opened." << std::endl;
   }

   std::string line;
   while (std::getline(in, line))
   {
      if (line.size() > 0)
      {
         entire.push_back(line);
      }
   }


   for (unsigned int i = 0; i < entire.size(); i++)
   {
      // This adds an entra space after the line/sentece.
      std::string s = entire[i];
      char *token = strtok(const_cast<char *>(s.c_str()), " ");
      int count = 1;

      while (token != NULL)
      {
         if (count % 3 == 1)
         {
            source.push_back(stoi(token));
         }
         else if (count % 3 == 2)
         {
            destination.push_back(stoi(token));
         }
         else
         {
            edge.push_back(stoi(token));
         }
         token = strtok(NULL, " ");
         count++;
      }
   }

   // We push the final line of code is used to push all the vertices and find the unique values
   // in sorted order to get the final list of vertices.

   vertices = source;
   std::sort(vertices.begin(), vertices.end());
   vertices.erase(std::unique(vertices.begin(), vertices.end()), vertices.end());
   int size = vertices[(vertices.size() - 1)] + 1;
   adj.resize(size, std::vector<int>(size));

   // Making the adjacency matrix.
   // Initializing all the edge weights of the matrix to 'infinity'.

   int a = std::numeric_limits<int>::max();
   for (unsigned int i = 0; i < adj.size(); i++)
   {
      for (unsigned int j = 0; j < adj.size(); j++)
      {
         adj[i][j] = a;
      }
   }
   adjList.resize(size);

   for (unsigned int i = 0; i < edge.size(); i++)
   {

      //Storing value in the adjacency matrix.
      adj[source[i]][destination[i]] = std::abs(edge[i]);
      
      //Storing value in the adjacenct list.
      adjList[source[i]].push_back(make_pair(destination[i], std::abs(edge[i])));
      
   }
   //Initializing all the elements of the diagonal in the adjacency matrix to 0.

   for(unsigned int i = 0; i< size; i++){
      adj[i][i] = 0;
   }



}

int file_Reader::getSize()
{
   return adj.size();
}

std::vector<int> file_Reader::getVertices()
{
   return vertices;
}

std::vector<int> file_Reader::getEdges()
{
   return edge;
}

std::vector< std::vector<int>> file_Reader::getAdj()
{
   return adj;
}


std::vector<std::vector< pair<int, int>>> file_Reader::getAdjList()
{
   return adjList;
}