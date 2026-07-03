#include <iostream>
using namespace std;

/*
Problem: LeetCode 9 - Palindrome Number

Approach:
1. Negative numbers are never palindromes.
2. Numbers ending with 0 (except 0 itself) cannot be palindromes.
3. Reverse only HALF of the number.
4. Stop when the reversed half becomes greater than or equal to the remaining half.
5. For even digits:
      x == rev
   For odd digits:
      x == rev / 10

New Concepts Learned:
- Reverse only half of the integer instead of the whole integer.
- This avoids integer overflow completely.
- Overflow check is NOT required because only half of the digits are reversed.
- Integer division (/10) removes the last digit.
- Modulo (%10) extracts the last digit.

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0)
            return false;

        if (x % 10 == 0 && x != 0)
            return false;

        int rev = 0;

        while (x > rev) {

            int digit = x % 10;

            rev = rev * 10 + digit;

            x /= 10;
        }

        return (x == rev) || (x == rev / 10);
    }
};

int main() {

    Solution obj;

    cout << obj.isPalindrome(121) << endl;     // 1
    cout << obj.isPalindrome(-121) << endl;    // 0
    cout << obj.isPalindrome(10) << endl;      // 0
    cout << obj.isPalindrome(1221) << endl;    // 1
    cout << obj.isPalindrome(12321) << endl;   // 1

    return 0;
}