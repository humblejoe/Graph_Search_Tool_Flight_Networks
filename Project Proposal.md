Team Seg Fools Project Proposal

Even if you choose to use one or more of the suggested example project goals, as a team you are responsible for submitting a project proposal of no more than two pages that contains the following information:

Data Set Used: <http://snap.stanford.edu/data/twitch_gamers.html>

1. Leading Question: Can I find a similar stream given a constraint on viewer count from a list of streamers and their mutual viewership?
1. Dataset Acquisition and Processing :
- Data format: Adjacency matrix implemented using maps
- Data Correction.*Note: These are just suggestions – you may have many other ideas for how to find and correct problems in your dataset*
1. The nodes read in from the dataset will be twitch ids/names
1. The edges represent mutual viewers between two streams
   1. Data Storage: CSV of Streamers’ ids, CSV of edges
3. Graph Algorithms:
   1. Function Inputs: Streamer ID, bounded viewer count, boolean value for maturity content
   1. Function Outputs: The most appropriate stream for users’ constraint and the shortest path to said stream/an error if no stream could be found.
   1. Function Efficiency: O(n)
4. NOTE: To be considered a valid final project, your team must implement at least two graph data algorithms as well as a graph traversal from the list of example goals or you must propose an algorithm or set of graph algorithms that represent an equivalent amount of coding development.
4. Timeline:
- Algorithms for reading data set
  - One to read in data from CSV
  - One to write data to a graph
- Algorithms for traversing graph
1. DFS
1. BFS

SIGNATURES:

Charles Lewis (calewis5)
