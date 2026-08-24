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
