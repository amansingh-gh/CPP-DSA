#include<iostream>
#include<string.h>
using namespace std;

bool findSubStr(string str, int i){
    int len = str.length()-1;
    if(i>=len) return false;

    if(str[i]=='S'){
        return true;
    }

    return findSubStr(str,i+1);

}

int main(){
    
    string str = "HelloSingh";
    int i=0;
   bool ans = findSubStr(str,i);
   if(!ans){
    cout << "NOT FOUND";
   }
   else{
    cout << "FOUND";
   }
   
    return 0;
}