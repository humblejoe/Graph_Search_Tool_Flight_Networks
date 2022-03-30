### Grade
Incomplete (0%), must resubmit for regrade. 

### Comment 
**Leading question** It's not entirely clear to me what kind of question you are trying to solve, can you make it more concrete? Perhaps give an example? 

**Dataset** Please describe the Data correction/Error handling step more clearly. More specifically, if you enconutered a invalid record in your dataset, i.e. a record that missing
some important piece information, how would you handle this record? One of the reasonable things to do is to just ignore this record when building the graph, and of course there 
are other reasonable approaches. Regardless of what choice you make, you must clearly describe your approach. Also, by data storage, we are asking for the *data structures* that you 
use to represent your graph, not the *raw format* in which the dataset was stored. Also, we explicitly mention that you need to give an estimate of the storage space required, in
big-O notation. 

**Algorithms** This is the major reason that you are getting a 0. Exactly what 3 algorithms are you using? I can infer that you are probably using one of the DFS/BFS, Dijkstra's algorithm,
and Kruskal's agorithm, but I shouldn't be inferring anything at all, you should make this information easily available to me. In particular, you should list all 3 algorihtms, and for 
each algorithm, give its input/output formats, a rough description of the functionality that this algorithm provides, and the running time for this algorithm. A more important problem
with your current proposal is that, both Dijkstra's algorithm and Kruskal's algorithm are going to be covered in this class, and we are asking for at least 1 algorithm that is outside
of this class. Therefore, you should replace one of your Dijkstra's or Kruskal's algorithm with another uncovered algorithm. I would suggest you to take a look at this [document](https://docs.google.com/document/d/10VL05FxUCQZMLb_jQfsfOMNR56ecxy0aIaqPH6KumBQ/edit) which lists 
some suggestions we have.

**Timeline** Are you sure this is a timeline? I expect you to give me a timeline detailing which algorithm should be finished by what date.
