#include <iostream>
using namespace std;

/*
Problem: Sum of First N Natural Numbers

Approach:
1. Base Case:
   - If n == 0, return 0.
2. Return:
      n + sum(n - 1)

Dry Run:
sum(5)

= 5 + sum(4)
= 5 + 4 + sum(3)
= 5 + 4 + 3 + sum(2)
= 5 + 4 + 3 + 2 + sum(1)
= 5 + 4 + 3 + 2 + 1 + sum(0)
= 5 + 4 + 3 + 2 + 1 + 0
= 15

New Concepts Learned:
- Recursive function returning a value.
- Each recursive call waits for the next call to return.
- Return values combine while backtracking.

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:

    int sum(int n) {

        if (n == 0)
            return 0;

        return n + sum(n - 1);
    }
};

int main() {

    Solution obj;

    int n = 5;

    cout << obj.sum(n) << endl;

    return 0;
}