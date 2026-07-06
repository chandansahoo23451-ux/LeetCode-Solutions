#include <iostream>
using namespace std;

/*
Problem: Factorial of a Number Using Recursion

Approach:
1. Base Case:
   - If n == 0 or n == 1, return 1.
2. Otherwise:
   - Return n * factorial(n - 1).

Dry Run:
factorial(5)

= 5 * factorial(4)
= 5 * (4 * factorial(3))
= 5 * (4 * (3 * factorial(2)))
= 5 * (4 * (3 * (2 * factorial(1))))
= 5 * (4 * (3 * (2 * 1)))
= 120

New Concepts Learned:
- Recursive function returning a value.
- Multiplication happens while backtracking.
- Every recursive call waits for the next call to return.

Time Complexity: O(n)
Space Complexity: O(n)
(Because n recursive calls are stored in the call stack.)
*/

class Solution {
public:

    int factorial(int n) {

        if (n == 0 || n == 1)
            return 1;

        return n * factorial(n - 1);
    }
};

int main() {

    Solution obj;

    int n = 5;

    cout << obj.factorial(n) << endl;

    return 0;
}