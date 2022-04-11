Team Seg Fools Project Proposal

Data Set Used: <https://snap.stanford.edu/data/reachability.html>

1. Leading Question:
   - Calculating the shortest path(ones that will take the least amount of time) between two airports.
      (i) How much of a better solution will Djikstra give than BFS?
   - Finding the busiest or the betweenness centrality of the airport by using Belllman-Ford algorithm. 
2. Dataset Acquisition and Processing :
   - Data format:
      - We are going to make a function to read from the txt file. All the negative weights in the graph will be converted into positive weights (absolute value). That function will loop through the data and store it in an adjacency  matrix.
      - The data will be stored in an Adjacency matrix, with the edge weights. |V| x |V| matrix. The values in the matrix represent the weights of the edges or the time taken to go from one city to the other(adjacent vertices).
      - If there are no connection between the vertices, we will put '0' in the adjacency matrices.
   - Data Correction:
      - If we encounter any nodes without any connections, we will remove the vertex.
      - If there is any edge with non-negative weight, we will remove it.
   - Data Storage: 
      - We will create a vector of the size equal to the number of unique vertices. This will store the number of times each of these vertices fall in the ‘shortest path’ between two vertices.
      - Adjacency Matrix uses O(|V|^2) memory.
3. Function Inputs:
   - BFS: Two vertices(a starting vertex and a destination vertex). 
   - Djikstra: Node to begin traversal and a node to which we want to find the shortest path.
   - Bellman-Ford Algorithm: A graph and a starting node(source vertex). 
      - We will be using a vector(Hash-Map) to store the number of times a vertex falls in the shortest path of two vertices.
4. Function Outputs: 
   - BFS: Returns the shortest path(s) between two vertices.
   - Djikstra: Nodes returned from search, shortest path.
   - Bellman-Ford: The busiest/central airport.
5. Function Efficiency: 
   - Adjacency Matrix:
      - Storage Space: O(|V|^2)
      - Adding a vertex: O(|V|^2)
      - Removing a vertex: O(|V|^2)
      - Adding an Edge: O(1)
      - Removing an Edge: O(1)
      - Querying for an edge: O(1)
   - BFS : (|V|+|E|)
      - Traversal which finds all nodes at the current depth before moving on to the next level. 
   - Dijkstra’s Algorithm O(|V|^2)
      - Finds the shortest path between two vertices in our weighted graph.
   - Bellman Ford's Algorithm O((|V|x|E|)^2)
      - For a given weighted graph, we will return the central/busiest airport which will be the node which occurs the most in the shortest path between two vertices. We will run Bellman-Ford on all the vertices and keep track of the number times a vertex falls in a shortest path. 

 
5. Timeline:
   - April 10th: Finish function to read in data and construct graph.
   - April 15th: Finish a functioning BFS algorithm. 
   - April 24th: Implement Dijkstra
   - May 1st: Implementing Bellman-Ford algorithm. Do final debugging 
   - May 6th: Turn in project

SIGNATURES:

X. Charles Lewis (calewis5)

X. Al Kaleshi (akales3)

X. Marcin Malysa (mmalysa2)

X. Manish Kumar (mkumar41)
