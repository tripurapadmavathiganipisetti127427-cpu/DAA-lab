PRATICAL 2:
SUMMARY:
LINEAR SEARCH
In this practical, the Linear Search algorithm was implemented to find a specific element in a list. 
The algorithm works by checking each element one by one from the beginning until the target element is found or the list ends.
It does not require the data to be sorted, making it simple and flexible to use.
The implementation included user input and execution time measurement to analyze performance.
The time complexity of Linear Search is O(n), where n is the number of elements in the list.

CONCLUSION:
In this practical, the Linear Search algorithm was implemented to find a specific element in a list. The algorithm works by checking each element one by one from the beginning until the target element is found or the list ends.
It does not require the data to be sorted, making it simple and flexible to use.
The implementation included user input and execution time measurement to analyze performance.
The time complexity of Linear Search is O(n), where n is the number of elements in the list.

BINARY SEARCH:
SUMMAARY:
In this practical, the Binary Search algorithm was implemented to efficiently locate an element in a sorted list.
The algorithm works by repeatedly dividing the list into two halves and comparing the target element with the middle element.
Based on the comparison, it continues searching in either the left or right half.
This reduces the number of comparisons significantly. The implementation included user input and execution time measurement.
The time complexity of Binary Search is O(log n), making it much faster than Linear Search for large datasets.

CONCLUSION:
Binary Search is a highly efficient searching technique, but it requires the data to be sorted before applying the algorithm.
It performs much better than Linear Search for large datasets due to its divide-and-conquer approach.
This practical demonstrated how proper algorithm selection can greatly improve performance. Overall, Binary Search is the best choice when working with large and sorted data.

PRACTICAL3:
SUMMARY
In this practical, the Max Heap Sort algorithm was implemented to sort a list of elements efficiently.
Heap Sort is a comparison-based sorting technique that uses a binary heap data structure. 
First, the input array is converted into a Max Heap, where the largest element is placed at the root. Then, the root element is swapped with the last element of the heap, and the heap size is reduced.
This process is repeated by re-heapifying the remaining elements until the array is completely sorted. 
The algorithm ensures that at each step, the largest element is correctly placed at its final position.
The implementation also demonstrated user input and execution time measurement to analyze performance. The overall time complexity of Heap Sort is O(n log n).

CONCLUSION:
The Max Heap Sort algorithm is an efficient and reliable sorting method, especially for large datasets.
It guarantees a consistent time complexity of O(n log n) in all cases, making it better than simple sorting techniques like Bubble Sort or Selection Sort. Additionally, it does not require extra memory for sorting, as it works in-place.
This practical helped in understanding how heap data structures can be used for sorting and how algorithm efficiency can be improved using structured approaches.
Overall, Heap Sort is a powerful technique for real-world applications requiring efficient and stable performance.

PRATICAL-4:
summary:
The factorial program was implemented using both iterative and recursive methods in Python to understand different problem-solving approaches.
In the iterative method, a loop is used to multiply numbers from 1 to n, making it straightforward and efficient in terms of memory usage.
In contrast, the recursive method solves the problem by calling the function repeatedly until it reaches the base case (0 or 1), which demonstrates the concept of function calls and stack usage. Both methods produce the same output, and their execution time was measured to compare performance. 
The time complexity of both approaches is O(n), as each method processes the input number linearly.

Conclusion:
This practical helped in understanding the difference between iterative and recursive approaches for solving the same problem.
While recursion provides a cleaner and more mathematical representation, iteration is generally more efficient in terms of space and avoids function call overhead. 
Time analysis showed that both methods have similar complexity, but iterative solutions are usually preferred in real-world applications for better performance. Overall, this experiment strengthens the understanding of algorithm design and performance analysis.

PRATICAL-7
summarry:
The coin change problem was implemented using the dynamic programming approach to determine the minimum number of coins required to make a given amount.
In this method, a table (array) is used to store solutions to smaller subproblems and build up to the final solution efficiently.
The algorithm iteratively checks each coin denomination and updates the minimum coins needed for every value from 0 to the target amount.
This avoids redundant calculations and ensures an optimal solution. 
The time complexity of this approach is O(n × amount), where n is the number of coin denominations.

Conclusion:
This practical demonstrates how dynamic programming can optimize problems that involve repeated subproblems, making it more efficient than naive recursive solutions.
It highlights the importance of breaking problems into smaller parts and storing intermediate results.
The coin change algorithm is widely used in real-world scenarios like currency systems and resource optimization.
Overall, this experiment improves understanding of dynamic programming concepts and shows how it helps in achieving efficient and optimal solutions.


PRATICAL 6
SUMMARY:
In this practical, the Matrix Chain Multiplication problem was implemented using Dynamic Programming. 
The main objective was to determine the most efficient way to multiply a sequence of matrices by minimizing the total number of scalar multiplications.
Instead of solving the problem using a naive recursive approach, a Dynamic Programming technique was applied to store intermediate results in a table, thereby avoiding redundant calculations.
The algorithm systematically evaluates all possible parenthesizations and selects the optimal one with minimum cost.
The implementation also included user input for matrix dimensions and measured execution time, demonstrating both correctness and efficiency of the approach. The time complexity of the algorithm is O(n³), and the space complexity is O(n²).

CONCLUSION:
The Dynamic Programming approach for Matrix Chain Multiplication significantly improves performance compared to the recursive method by eliminating repeated computations. 
This makes it highly efficient for large input sizes. 
The practical demonstrated how optimization techniques can be applied to real-world computational problems such as database query optimization and scientific calculations. 
Overall, the experiment provided a clear understanding of how Dynamic Programming works in reducing computational complexity and improving execution efficiency.

pratical:8 
sumarry:(DFS)
In this experiment, Depth First Search (DFS) algorithm was implemented using Python.
The graph was represented using an adjacency list. DFS traversal was performed using recursion, where each node is visited and then its adjacent nodes are explored deeply before moving to the next node.
The algorithm uses a visited set to avoid revisiting nodes and to prevent infinite loops.
The traversal order obtained shows that DFS explores the graph in a depth-wise manner.
The time complexity of DFS is O(V + E), where V is the number of vertices and E is the number of edges.

conclusion:
The DFS algorithm was successfully implemented and executed.
It is useful in applications such as path finding, cycle detection, and solving puzzles like mazes.
DFS is efficient and simple to implement using recursion. 
It helps in exploring all possible paths in a graph and is an important fundamental algorithm in computer science.

summary:(BFS)
In this experiment, Breadth First Search (BFS) algorithm was implemented using Python. 
The graph was represented using an adjacency list.
BFS traversal was performed using a queue, where nodes are visited level by level starting from the source node.
A visited set was used to track visited nodes and avoid repetition.
The traversal order shows that BFS explores all neighbors of a node before moving to the next level. The time complexity of BFS is O(V + E).

conclusion:
The BFS algorithm was successfully implemented and tested.
It is widely used in applications such as shortest path finding in unweighted graphs, network traversal, and level-order traversal in trees. 
BFS is efficient and guarantees the shortest path in terms of the number of edges. It is a fundamental and important algorithm in graph theory.
