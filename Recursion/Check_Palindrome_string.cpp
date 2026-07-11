#include<iostream>
using namespace std;
class Solution{
    public: bool Check_Palindrome(const string &s, int left,int right){
        if(left>=right)return true;
        if(s[left] != s[right]){
            return false;}
            return Check_Palindrome(s,left+1,right-1);
            
        }
};
int main(){
string s= "naman";
Solution obj;
if(obj.Check_Palindrome(s,0,s.size()-1))
cout<< "is palindrome";
else cout<<"not palindrome";
return 0;
}