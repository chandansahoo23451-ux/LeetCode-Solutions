#include<iostream>
using namespace std;
class Solution
{
private:
    /* data */
public:
    int gcd(int n1, int n2){
    // eucledian algorithm gcd(n1,n2); =gcd (n1-n2 ,n2);

    while (n1 > 0 && n2 > 0)
{
    if (n1 > n2)
        n1 %= n2;
    else
        n2 %= n1;
}

if (n1 == 0){
    return n2;
}
return n1;
}
};
    int main(){
        Solution obj;
      cout<<obj.gcd( 21,7)<<endl;
      cout<<obj.gcd(24,12)<<endl;
      return 0;
    }
    


