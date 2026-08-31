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

SUMMARY: PRATICAL-4
The factorial program was implemented using both iterative and recursive methods in Python to understand different problem-solving approaches.
In the iterative method, a loop is used to multiply numbers from 1 to n, making it straightforward and efficient in terms of memory usage.
In contrast, the recursive method solves the problem by calling the function repeatedly until it reaches the base case (0 or 1), which demonstrates the concept of function calls and stack usage. Both methods produce the same output, and their execution time was measured to compare performance. 
The time complexity of both approaches is O(n), as each method processes the input number linearly.

Conclusion:
This practical helped in understanding the difference between iterative and recursive approaches for solving the same problem.
While recursion provides a cleaner and more mathematical representation, iteration is generally more efficient in terms of space and avoids function call overhead. 
Time analysis showed that both methods have similar complexity, but iterative solutions are usually preferred in real-world applications for better performance. Overall, this experiment strengthens the understanding of algorithm design and performance analysis.

Summary: PRATICAL-7
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
