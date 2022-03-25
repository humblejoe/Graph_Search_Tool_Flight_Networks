Team Seg Fools Project Proposal

Even if you choose to use one or more of the suggested example project goals, as a team you are responsible for submitting a project proposal of no more than two pages that contains the following information:

Data Set Used: <http://snap.stanford.edu/data/twitch_gamers.html>

1. Leading Question: Can I find a similar stream given a constraint on viewer count from a list of streamers and their mutual viewership?
2. Dataset Acquisition and Processing :
   - Data format: Adjacency matrix implemented using maps
   - Data Correction:
      - The nodes read in from the dataset will be twitch ids/names
      - The edges represent mutual viewers between two streams
   - Data Storage: 
      - CSV of Streamers’ ids
      - CSV of edges
3. Graph Algorithms:
   - Function Inputs: Streamer ID, bounded viewer count, boolean value for maturity content.
   - Function Outputs: The most appropriate stream for users’ constraint and the shortest path to said  stream/an error if no stream could be found.
   - Function Efficiency: O(n)
4. Timeline:
   - Algorithms for reading data set
      - One to read in data from CSV.
      - One to write data to a graph.
   - Algorithms for traversing graph 
      - DFS
      - BFS

SIGNATURES:

X. Charles Lewis (calewis5)

X. Al Kaleshi (akales3)

X. Marcin Malysa (mmalysa2)

X. Manish Kumar 4 (mkumar41)
