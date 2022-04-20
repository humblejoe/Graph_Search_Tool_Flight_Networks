 Week of April 1st: Picked up the social netwrok graph and chose the algporithms(BFS, Dijkstra, Brandes Algorithm). We realized we need to change our dataset since we these algorithms were not applicable on it. 
    - Our goal was to work on the project proposal and meet with our TA to get the project proposal approved. 
    - We all worked on call everyday around 5 to discuss the proposal ideas and dataset.
    - We had to rethink our dataset because some of the algorithms were not working it.
    - Get our proposal approved and log.

Week of April 7th: We uploaded a new datset,(the airport dataset), applying BFS, Dijkstra and Travellinng salesman problem. We noticed that our dataset did not meet the requirements for travelling salesman problem. We changed the third algorithm to Johnson's algorithm to find the betweenness centrality. 
    - Our goal for this week was to finish the project proposal. 
    - We all worked on call everyday around 5 to discuss the proposal ideas and dataset.
    - We encountered problems with error handling such as erroneous records, for example if some edge was missing edge weight or its end point we needed to take that into account into account.
    -We plan to create the make file, BFS and start with Dijkstra's algorithm.


Week of April 11 and April 18: Goals for the week: Pre-process data in order to put into C++ repository, complete a class/function to read in the resulting .txt file into the C++ project repository.
- Specific tasks: 
    - Charles – created MakeFile and backbone for the repository/project. 
    - Manish – read the .txt file into Excel for data cleaning. Created class FileRead, which took the clean .txt file in the repository and filtered it into an adjacency matrix (mostly functional) for use by future functions. Also began work on BFS function. 
    - Al – Went into FileRead and created getters for different portions of adjacency list data and rearranged variables to be public/private in accordance with CS225/C++ standards.
    - Marcin – Created tests.cpp and a small test graph (with included .png representation) as a test case for the data reading class. Created 10 tests to validate whether the read-in adjacency matrix worked or not. Also made edits to class FileRead in order to make the class accommodate for any input, not just the “file.txt” data.   
- Problems encountered: 
    - One problem encountered was a pre-processing issue which would cause a segfault on some datasets that were not the original “file.txt” data. The issue was with the “size” variable in the file_read.cpp file, which did not accommodate for vertices that are not 0 indexed and vertices that were not sequential. Was fixed, and goals were met. 
- Plans for next week:
    - Complete BFS (which is partially implemented) and write test cases for BFS.
    - Complete Dijkstra’s algorithm implementation.