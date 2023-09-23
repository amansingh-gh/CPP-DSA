#include<iostream>
using namespace std;

void reverse(string&s, int st, int e){
    if(st>=e) return;
    swap(s[st],s[e]);
    reverse(s,st+1, e-1);
}

int main(){
    string s = "hey";
    int start = 0;
    int end = s.size()-1;
    reverse(s,start,end);
    cout << "The reverse string is : " << s ;
    return 0;
}