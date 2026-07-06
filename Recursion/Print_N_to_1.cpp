#include<iostream>
using namespace std;
class Solution{
    public: void print_n_to_1(int i,int n){
        if(i == n)
        return;
        cout<<n-i<<endl;
        print_n_to_1( i+1,n);
    }
}; 

int main(){
Solution obj;
obj.print_n_to_1(0,5);
return 0;
}