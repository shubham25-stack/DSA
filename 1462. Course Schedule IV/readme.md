Problem Statement:</br></br>
There are a total of numCourses courses you have to take, labeled from 0 to numCourses - 1. You are given an array prerequisites </br> prerequisites[i] = [ai, bi] indicates that you must take course ai first if you want to take course bi.</br>
</br>
For example, the pair [0, 1] indicates that you have to take course 0 before you can take course 1.</br>
Prerequisites can also be indirect. If course a is a prerequisite of course b, and course b is a prerequisite of course c, then course </br>a is a prerequisite of course c.</br></br>

You are also given an array queries where queries[j] = [uj, vj]. For the jth query, you should answer whether course uj is a </br>prerequisite of course vj or not.</br>
</br>
Return a boolean array answer, where answer[j] is the answer to the jth query.</br>
</br></br>
Approach Summary</br>
Input Parsing: Read the number of courses, prerequisites, and queries.</br>
Graph Representation: Use an adjacency list (via unordered_map and unordered_set) to represent the reachability of courses.</br>
Transitive Closure: Use a modified Floyd-Warshall algorithm to compute the transitive closure of the graph, determining which courses </br>can reach which others.</br>
Query Evaluation: For each query, check if the prerequisite relationship exists using the computed reachability data.</br>
Return Results: Collect and return the results for each query.</br></br></br></br></br></br></br></br></br>



![alt text](image.png)