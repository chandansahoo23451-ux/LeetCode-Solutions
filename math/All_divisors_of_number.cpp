/*Print all Divisors of a given Number
Problem Statement: Given an integer N, return all divisors of N.
A divisor of an integer N is a positive integer that divides N without leaving a remainder. In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.

Examples
Input: N = 36
Output: [1, 2, 3, 4, 6, 9, 12, 18, 36]  
Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36.
Input: N = 12
Output: [1, 2, 3, 4, 6, 12]
Explanation: The divisors of 12 are 1, 2, 3, 4, 6, 12.*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Problem: Print All Divisors of a Number

Approach:
1. Iterate from 1 to sqrt(n).
2. If i divides n:
      - Store i.
      - If i != n/i, store n/i as well.
3. Sort the divisors before printing.

Why sqrt(n)?
Divisors always occur in pairs.

Example:
36

1 × 36
2 × 18
3 × 12
4 × 9
6 × 6

After sqrt(36) = 6, the pairs start repeating.

New Concepts Learned:
- Divisors always exist in pairs.
- We only need to iterate till sqrt(n).
- Avoid duplicate divisor when i == n/i (perfect square).
- sort() from <algorithm>.

Time Complexity: O(√n log √n)
Space Complexity: O(√n)
*/

class Solution {
public:
    vector<int> divisors(int n) {

        vector<int> ans;

        for (int i = 1; i * i <= n; i++) {

            if (n % i == 0) {

                ans.push_back(i);

                if (i != n / i)
                    ans.push_back(n / i);
            }
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};

int main() {

    Solution obj;

    int n = 36;

    vector<int> ans = obj.divisors(n);

    cout << "Divisors of " << n << " are:\n";

    for (int x : ans)
        cout << x << " ";

    cout << endl;

    return 0;
}