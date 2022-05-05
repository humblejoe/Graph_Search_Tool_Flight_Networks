# calewis5-mmalysa2-akales3-mkumar41
The final project git repo for team seg_fools
Team Seg_Fools final project PROJECT NAME


Our final project consists of four functions that can be used on a directed, weighted graph.
The source files for this functions can be found in the working directory of our project folder.
1. file_read.cpp
    Takes a space separated file with three indexes per line, the first being a source vertex, the second being a destination vertex, and the third being the weight for the edge.

    Reads the file into both an adjacency matrix and an adjacency list
2. Dijkstra.cpp
    Given an input node, returns the shortest path to all other nodes, taking into account the weight of edges.
3. BFS.cpp
    Given an input node, performs a breadth-first search from that node, and returns the path of the traversal.
4. BTC.cpp
    Given any input node for the graph, runs Floyd-Warshall algorithm on that graph and returns the most central node of given graph. 
   
The code can be compiled by enerting "make" into console and executed by typing "./graphs". A prompt will appear asking for a starting node for BFS, this traversal will then be printed to console. A second prompt will appear asking for a node to perform dijkstra's on. the shortest path to all nodes in the connected component will be printed along with the weight to said node. In addition, the betweeness centrality algorithm run on the graph, and the most central node will be returned.

If the user would like a new graph to run the algorithms on, they can change the custom.txt file with each lines representing a start node, a destination node, and a weight. The files can then be remade and executed with ./graphs

The test files for these described functions can be found under the /tests folder in the working directory.
These tests can be executed by entering the "make test && ./test" command in terminal. 