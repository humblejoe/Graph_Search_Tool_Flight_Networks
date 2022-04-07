Team Seg Fools Project Proposal

Data Set Used: <https://snap.stanford.edu/data/reachability.html>

1. Leading Question:
   - Calculating the shortest path(ones that will take the least amount of time) between two airports.
      (i) How much of a better solution will Djikstra give than BFS?
   - Finding the busiest or the betweenness centrality of the airport using Johnson's algorithm. Johnson's algorithm uses both Dijkstra and Bellmanford Algorithm as subroutines.
2. Dataset Acquisition and Processing :
   - Data format:
      Adjacency matrix (2D Vector of int pointers) to store the dataset. |V| x |V| matrix. The values in the matrix represent the weights of the edges or the time taken to go from one city to the other(adjacent vertices).
   - Data Correction:
      - During our data preprocessing, if we encounter any edge with missing 'weights', we will find the average weight of all the edges[Floor], in the missing values.
      - The id’s represent the vertices in the graph. The connected vertices in the graph will be stored using an adjacency.
      - If we encounter any nodes without any connections, we will remove the vertex.
   - Data Storage: 
      - We will create a vector of the size equal to the number of unique vertices. This will store the number of times each of these vertices fall in the ‘shortest path’ between two vertices.
      - Adjacency Matrix uses O(n^2) memory.
3. Function Inputs:
   - BFS: A traversal algotithm for the graph. 
   - Djikstra: Node to begin traversal and a node to which we want to find the shortest path.
   - Johnsons Algorithm: A starting node. 
      - We will be using a vector(Hash-Map) to store the number of times a vertex falls in the shortest path of two vertices.
4. Function Outputs: 
   - Djikstra: Nodes returned from search, shortest path.
   - Function Efficiency: 
      - Adjacency Matrix:
         - Storage Space: O(|V|^2)
         - Adding a vertex: O(|V|^2)
         - Removing a vertex: O(|V|^2)
         - Adding an Edge: O(1)
         - Removing an Edge: O(1)
         - Querying for an edge: O(1)
   - BFS : (|V|+|E|)
      - Traversal which finds all nodes at the current depth before moving on to the next level. 
   - Dijkstra’s Algorithm O(nlog(n) + m)
      - Finds the shortest path between two vertices in our weighted graph.
   - Johnson's Algorithm O(|V|^2log|V| + VE)
      - For a given weighted graph, we will return the central/busiest airport.

 
5. Timeline:
   - April 10th: Finish function to read in data and construct graph.
   - April 15th: Finish a functioning BFS algorithm. 
   - April 24th: Implement Dijkstra
   - May 1st: Implementing Johnson's algorithm. Do final debugging 
   - May 6th: Turn in project

SIGNATURES:

X. Charles Lewis (calewis5)

X. Al Kaleshi (akales3)

X. Marcin Malysa (mmalysa2)

X. Manish Kumar (mkumar41)
