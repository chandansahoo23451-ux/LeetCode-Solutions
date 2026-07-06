#include <iostream>
using namespace std;

/*
Problem: Print Name N Times Using Recursion

Approach:
1. Base Case:
   - If count > n, stop the recursion.
2. Print the name.
3. Call the function again with count + 1.

Example:
n = 3

printName(1)
|
|-- Print "Chandan"
|-- printName(2)
      |
      |-- Print "Chandan"
      |-- printName(3)
            |
            |-- Print "Chandan"
            |-- printName(4)
                    |
                    |-- Stop (Base Case)

New Concepts Learned:
- Recursion
- Base Case
- Recursive Function Call
- Call Stack

Time Complexity: O(n)
Space Complexity: O(n)
(Because n recursive function calls are stored in the call stack.)
*/

class Solution {
public:

    void printName(int count, int n) {

        if (count > n)
            return;
    // basw condition
        cout << "Chandan" << endl;

        printName(count + 1, n);
    }
};

int main() {

    Solution obj;

    int n = 5;

    obj.printName(1, n);

    return 0;
}