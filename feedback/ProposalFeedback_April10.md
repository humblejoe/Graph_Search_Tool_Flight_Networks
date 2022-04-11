### Grade
Competent (90%)

### Comment 
**Leading question** Shortest path between two airports is a reasonable leading question. BFS / Dijkstras will likely show some interesting behavior (potentially still a useful search if you are trying to minimize number of layovers?) so a good follow-up quesiton as well.

Note that you dont need a leading question for every algorithm -- though I'm happy to see you have a solid motivation for each. To quote the final project description: "NOTE: Not every algorithm implemented in the project must directly answer this question, but you must answer the question using the algorithms you have selected."

**Dataset** Overall pretty good! One potential issue is you didn't mention how to handle a disconnected graph but I'll leave that to you to figure out during the project. It's not a major issue as long as it doesnt break your code (though I will test your code on it at some point).

**Algorithms** The input of BFS / DFS makes sense. Bellman-Ford does not. Specifically, betweenness centrality doesnt have a 'starting node' because *every node* is the starting node -- its computing ALL POSSIBLE shortest paths.

 More generally there's a technical issue here in your proposal writing in that Bellman-Ford is a solution to shortest path -- its an analog to Dijkstras. The algorithm you want (at least based on our conversation) is a solution to betweenness centrality which is either Johnson's algorithm (or Floyd-Warshall). I think the confusion here is that Johnson's algorithm *uses* Bellman-Ford but they are two separate things. For example, I can make a dictionary by using two arrays, a tree, or a hash table but if I implement an array it is not the same thing as making a dictionary. Does that make sense? [This error also shows up in your timeline]

 That said you do include details that make it clear you are doing betweenness centrality (storing the number of times each vertex is in shortest path, your leading question, etc...) and you mention this in your efficiency that you will be running Bellman-Ford on all vertices. So this isn't a point-loss worthy error so much as a note that there's a disconnect in your writing and that you will be responsible for betweenness centrality not shortest path twice. 

 Feel free to make some minor edits to the proposal to correct the wording or just go ahead with it since again we've met in person and I know what you are doing. 
