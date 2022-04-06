Team Seg Fools Project Proposal

Data Set Used: <https://snap.stanford.edu/data/reachability.html>

1. Leading Question:
   - Calculating the shortest path(ones that will take the least amount of time) between two airports.
      (i) How much of a better solution will Djikstra give than BFS?
   - Calculating Traveling Salesman: What is the quickest route I can take given a city to visit every other city and return to my starting point?
2. Dataset Acquisition and Processing :
   - Data format:
      Adjacency matrix (2D Vector of int pointers) to store the dataset. |V| x |V| matrix. The values in the matrix represent the weights of the edges or the time taken to go from one city to the other(adjacent vertices).
   - Data Correction:
      - The id’s represent the vertices in the graph. The connected vertices in the graph will be stored using an adjacency.
      - If a vertex is found to not have any connected edges, it will be removed from the adjacency matrix
   - Data Storage: 
      - We will create a vector of the size equal to the number of unique vertices. This will store the number of times each of these vertices fall in the ‘shortest path’ between two vertices.
      - Adjacency Matrix uses O(n^2) memory.
3. Function Inputs:
   - Djikstra: Node to begin traversal and a node to which we want to find the shortest path.
   - Farthest Insertion: A starting node.
4. Function Outputs: 
   - Djikstra: Nodes returned from search, shortest path.
   - Farthest Insertion: The shortest route that visits every node and returns to the starting node. 
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
   - Farthest Insertion O(n^2)
      - Given a set of cities and distances between every pair of cities, the problem is to find the shortest possible route that visits every city exactly once and returns to the starting point.

 
5. Timeline:
   - April 10th: Finish function to read in data and construct graph.
   - April 15th: Finish a functioning BFS algorithm. 
   - April 24th: Implement Dijkstra
   - May 1st: Traveling salesman problem. Do final debugging 
   - May 6th: Turn in project

SIGNATURES:

X. Charles Lewis (calewis5)

X. Al Kaleshi (akales3)

X. Marcin Malysa (mmalysa2)

X. Manish Kumar (mkumar41)
