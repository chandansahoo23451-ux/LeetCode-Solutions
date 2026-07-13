#include <iostream>
using namespace std;

/*
Problem: Fibonacci Number Using Recursion

Approach:
1. Base Case:
   - If n == 0, return 0.
   - If n == 1, return 1.
2. Otherwise:
   - Return fibonacci(n - 1) + fibonacci(n - 2).

Dry Run:
fibonacci(5)

= fibonacci(4) + fibonacci(3)

= (fibonacci(3) + fibonacci(2))
  + (fibonacci(2) + fibonacci(1))

...

= 5

New Concepts Learned:
- Multiple recursive calls.
- Binary recursion.
- Overlapping subproblems.
- Introduction to Dynamic Programming.

Time Complexity: O(2^n)
Space Complexity: O(n)

Note:
This is NOT the optimal solution.
It is written to understand recursion.
The optimal solution uses Dynamic Programming
and runs in O(n) time and O(1) space.
*/

class Solution {
public:

    int fibonacci(int n) {

        if (n <= 1)
            return n;

        return fibonacci(n - 1) + fibonacci(n - 2);
    }
};

int main() {

    Solution obj;

    int n = 5;

    cout << "Fibonacci(" << n << ") = ";
    cout << obj.fibonacci(n);

    return 0;
}