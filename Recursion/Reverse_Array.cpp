
#include<iostream>
#include <vector>
using namespace std;
class Solution{
public:void Reverse_array( vector<int>&arr,int i,int j){//without & ek copy ban jayega,
 if(i>j)return ;
    swap(arr[i] , arr[j]);
return;
 Reverse_array( arr,i +1,j+1) ;
}
};
int main(){
    Solution obj;
vector<int> arr = {1,2,3,4,5};
obj.Reverse_array(arr,0,arr.size()-1);//without obj call nhii kar sakte undefined ayega

    cout << "Reversed Array:\n";

    for (int x : arr)
        cout << x << " ";


return 0;
}