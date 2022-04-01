Team Seg Fools Project Proposal

Even if you choose to use one or more of the suggested example project goals, as a team you are responsible for submitting a project proposal of no more than two pages that contains the following information:

Data Set Used: <http://snap.stanford.edu/data/twitch_gamers.html>

1. Leading Question:
   - We will be finding the shortest path between two twitch users depending on their mutual relationship. 
      - Input: Two twitch users.
      - Output: The list of users which fall in the shortest path.
      - Can I find a similar stream given a constraint on viewer count from a list of streamers and their mutual viewership? For example, say you wanted to watch a  creator with a smaller community who has similar content to another streamer, but does not contain mature content, a graph constructed from this dataset would be able to find a streamer that fits this query.
2. Dataset Acquisition and Processing :
   - Data format: Adjacency matrix implemented using maps
   - Data Correction:
      - The nodes read in from the dataset will be twitch ids/names
      - The edges represent mutual viewers between two streams. These edges can be read into an adjacency list of pointers,  nullptr if a node does not contain an edge to another node.
      - If there are any vertices without edges, they will be ignored because there would be no way to traverse to that point in the graph.
      - If we are looking for a streamer with a specific attribute in the graph, we should construct a list of known attributes prior that is checked every time a query is inserted. If an unknown attribute is searched, the search can be terminated immediately because we will know the attribute is invalid.
   - Data Storage: 
      - Because the graph will consist of real data, we can expect that the adjacency list will have a space complexity of O(V+E).
3. Graph Algorithms:
   - Function Inputs: Streamer ID, bounded viewer count, language, boolean value for maturity content.
   - Function Outputs: The most appropriate stream for users’ constraint and the shortest path to said stream/an error if no stream could be found. 
   - Function Efficiency:
      - Adjacency list
         - Creating a list
            - Average Case: O(V+E)
            - Worst Case: O(V^2)
         - Adding a vertex: O(1)
         - Removing a vertex: O(V+E)
         - Adding an Edge: O(1)
         - Removing an Edge: O(E)
         - Querying for an edge: O(V)
         - Finding neighbors: O(V)
      - BFS: (V + E)
      - Δ-stepping:
         - Sequential ∆-stepping algorithm solves SSSP in O(n + m + d · L) time.
            - Average time - O(log^(2)n)
            - Average work - O(n+m)
4. Timeline:
   - April 1st: Finish timeline 
   - April 10th: Finish function to read in data and construct graph 
   - April 17th: Finish a functioning BFS algorithm
   - April 24th: Finish implementation of Δ-stepping algorithm 
   - May 1st: Do final debugging 
   - May 6th: Turn in project

SIGNATURES:

X. Charles Lewis (calewis5)

X. Al Kaleshi (akales3)

X. Marcin Malysa (mmalysa2)

X. Manish Kumar 4 (mkumar41)
