#include<iostream>
using namespace std;

bool palindromeCheck(string&s, int st, int end){
   //base case
   if(st>=end) return true;

   //1 case solution
   if(s[st]!=s[end]){
    return false;
   }

   return palindromeCheck(s,st+1, end-1);
}

int main(){
    string s = "racecar";
    int i =0;
    int n = s.size()-1;
    int res = palindromeCheck(s,i,n);
    if(res==0){
        cout << "Not found";
    }
    else {
        cout << "Found";
    }
    return 0;
}