Marcin Malysa, Manish Kumar, Charles Lewis, Al Kaleshi (Team SegFools)
CS225 Final Project White Paper


Output and Correctness of Each Algorithm

BFS
	As extensively discussed in lecture, a breadth-first search (BFS) is a method of traversing a graph level by level. Our BFS implementation takes in a starting node and an adjacency matrix as inputs. Using a queue, our BFS marks unvisited adjacent vertices, inserts them into the queue (with priority given to smaller vertex numbers), and traverses accordingly. This ensures that the input graph is traversed level-by-level. 

	We tested the functionality of our BFS implementation against two test graphs, pictured below. The 
    left graph is known as “testgraph_small” and the right graph is known as “testgraph_medium” in our “tests” directory. Testgraph_small derives its data from “testDataCleaning.txt” and testgraph_medium derives its data from “testgraph_medium.txt”.

    https://gyazo.com/4cd9b9d2472bb4f7cddf1da794800646

    https://gyazo.com/43c30f50b197fbf93412bacb319b6f53
    
    When conducting a BFS traversal of testgraph_small starting from vertex 0, we would expect the output to be {0, 1, 3, 2, 4}. As expected, the corresponding output in the terminal is:
    
    https://gyazo.com/76480d35dc3f34952a1afdb32d0db4c8

    Similarly, one would expect the BFS traversal on testgraph_medium starting from vertex 0 to be {0, 1, 2, 3, 4, 5, 6, 7}. Our BFS traversal algorithm confirms this:

    https://gyazo.com/d8f439534803b555dff19c03182f3cd9

    In our BFS tests (found in bfs_test.cpp of the tests directory) further confirms the validity of our BFS algorithm by testing the BFS output against multiple different starting nodes. 

	The runtime of our implementation of BFS is O(V^2) because we use an adjacency matrix. 

	Running a BFS on our full dataset starting from Los Angeles, CA (vertex 248), we can see that the last node visited by the BFS is vertex 397 (St. Anthony, Newfoundland). For this particular dataset, this is a logical output.

    https://gyazo.com/422f315ead21dc0e46d3366ef7c7f80e

Dijkstra’s Algorithm
	Our second algorithm is Dijkstra’s Algorithm. Dijkstra’s Algorithm is essentially a BFS shortest-path algorithm that considers edge weights. Our version of Dijkstra’s Algorithm takes in an adjacency list and a starting vertex as an input and returns the shortest path to all other vertices in the graph from the starting node as well as the shortest paths that are taken. See the output below for further detail. Our implementation of the algorithm also uses a priority queue that acts as a min heap to prioritize edges with minimal weights. A parent vector keeps track of the shortest paths as the algorithm progresses its traversal.

	In order to test our implementation, we used the same test graphs as shown in the BFS description above. With obviously weighted paths, one can match up an expected output path to what the algorithm returns. For example, the shortest path from vertex 0 to vertex 4 on testgraph_small should have a weight of 800 and follow the path vector {0, 3, 4}. Our algorithm prints the following results:

    https://gyazo.com/6f47059d1ed320742bb735e5e0eaae92

    The expected output matches the last path result.

	Running the same algorithm on testgraph_medium, the following output can be realized:

    https://gyazo.com/62bd7ff26cfafd10390f4bfb67c50f18

    Our tests check several of the paths to make sure they are the lowest weight shortest paths. These tests can be found in the dijkstra_test.cpp file in the tests directory. 
    
    The runtime of our implementation of Dijkstra’s Algorithm is O(ElogV). 
    
    Running Dijkstra’s Algorithm on the same Los Angeles, CA vertex as before (vertex 248), we can see that the shortest path to St. Anthony, Newfoundland passes through the following vertices:
        1. Start: 248 (Los Angeles, California)
        2. 94 (Dallas/Fort Worth, Texas)
        3. 280 (Montreal, Quebec)
        4. 401 (St. Johns, Newfoundland)
        5. Destination: 397 (St. Anthony, Newfoundland)
	The total weight of this path is 474, one of the higher weights possible to achieve in our graph.

    https://gyazo.com/69286c00a16c445610d8b0eb7568282b

Betweenness Centrality
	The final algorithm of our project is the calculation of betweenness centrality. To calculate the betweeness centrality, we used a variation of the Floyd Warshall Algorithm.
	
	In order to test the accuracy of the algorithm, we constructed a special graph that would make centrality very clear. The below graph is called “btcgraph.png” and reads from “btcgraph.txt”. 

    https://gyazo.com/f1ca00686758a11c527146783219a9f4

	From looking at the graph, it is fairly obvious that most shortest paths within btcgraph would run through the central vertex of 4. When looking at the betweenness centrality algorithm output, we confirm this to be true: 

    https://gyazo.com/757cc29689c9d9bb4109689e193db77b

	We tested our betweenness centrality algorithm against all three test graphs (testgraph_small, testgraph_medium, and btcgraph) and confirmed that the algorithm works as intended. 
    
    The runtime of our algorithm to calculate betweenness centrality is: |V|3

	When running betweenness centrality on our actual flight data, the most central node is vertex 100. Vertex 100 is Denver International Airport in Denver, CO. 
    
    https://gyazo.com/df9bd65ac9341cc08f57a1e2324825bf

Key Takeaways
	It was very interesting to take our working algorithms and stack them against the initial flight path data. Below are a few interesting takeaways that we got from running our algorithms against our “file.txt”, which contains the original flight path data. 
    
    One of our most interesting takeaways was from running betweenness centrality on our graph. According to our algorithm, the most central vertex of our graph is vertex 100. Our group went in with the assumption that the most central node of the graph would be the node that contained the most edges or was the most famous name. We predicted that the most central airport would be either the Los Angeles International Airport in California or the JFK/LaGuardia Airports in New York. Vertex 100 was actually keyed to Denver International Airport. It is interesting to see how our computed central node is actually quite close to the geographical center of the United States and is not necessarily the most famous named airport in the United States.
