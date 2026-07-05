/*Check if a number is Armstrong Number or not


18

Problem Statement:Given an integer N, return true it is an Armstrong number otherwise return false.

An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
Examples 
Example 1:
Input:N = 153
Output:True
Explanation: 1^3+5^3+3^3 = 1 + 125 + 27 = 153
                                        
Example 2:
Input:N = 371                
Output: True
Explanation: 3^3+7^3+1^3 = 27 + 343 + 1 = 371*/
#include<bits/stdc++.h>

using namespace std;
class Solution {
    public:
     bool check_amstrong(int n){
        int k = 0;
        int m = n;
        int p = n;
        int rem = 0;
        int sum = 0 ;
        while (n != 0){
            n/=10;
            k++;
        } 
        // for(int i = 0;i<m;i++){
        // //    int rem = m%10 ye karna better hoga kyunki rem is not required outside
        // rem = m%10;
        // sum = sum + pow(rem,k);
        // m/=10; ye galat hai because yahan pai m ko constraint banake loop mai change kr rhe ho to not relaible
        while (m != 0) {
    int rem = m % 10;
    int power = 1;
    for(int i=0;i<k;i++){
        power *= rem;
    }
    sum = sum + power;
    m /= 10;
}
        return (sum == p);
    }
};
int main(){
    Solution obj;
    cout<<obj.check_amstrong(12)<<endl;
    cout<<obj.check_amstrong(153)<<endl;
    return 0;
}
