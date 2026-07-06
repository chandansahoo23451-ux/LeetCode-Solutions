#include<iostream>
using namespace std;
class Solution{
    public: void print_1_to_n(int i,int n){
        if(i > n)
        return;
        cout<<i<<endl;
        print_1_to_n( i+1,n);
    }
}; 

int main(){
Solution obj;
obj.print_1_to_n(1,5);
return 0;
}