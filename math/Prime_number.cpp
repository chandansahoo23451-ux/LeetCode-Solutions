#include <iostream>
using namespace std;

/*
Problem: Check if a Number is Prime

Approach:
1. A prime number has exactly two divisors:
      - 1
      - Itself
2. Check divisibility only up to sqrt(n).
3. If any divisor is found, return false.
4. Otherwise, return true.

Example:
n = 29

29 % 2 != 0
29 % 3 != 0
29 % 4 != 0
29 % 5 != 0

Since sqrt(29) ≈ 5.38, we stop here.
29 is prime.

New Concepts Learned:
- Prime numbers have exactly two divisors.
- We only check till sqrt(n).
- If one divisor exists, another divisor automatically exists.

Time Complexity: O(√n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool isPrime(int n) {

        if (n <= 1)
            return false;

        for (int i = 2; i * i <= n; i++) {

            if (n % i == 0)
                return false;
        }

        return true;
    }
};

int main() {

    Solution obj;

    cout << obj.isPrime(2) << endl;      // 1
    cout << obj.isPrime(10) << endl;     // 0
    cout << obj.isPrime(29) << endl;     // 1
    cout << obj.isPrime(49) << endl;     // 0

    return 0;
}