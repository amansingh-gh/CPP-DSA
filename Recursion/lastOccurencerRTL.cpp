#include<iostream>
using namespace std;

void lastOccurenceRTL(string&s, char x, int i, int& ans){
    if(i<0) return;  //base case
    if(s[i]==x) {ans = i; return; }
    lastOccurenceRTL(s,x,i-1,ans);
}

int main(){
    string s;
    cout << "Enter the string : ";
    cin >> s;

    char x;
    cout << "Enter the character target: ";
    cin >> x;

    int ans = -1;
    int i = s.size()-1;
    lastOccurenceRTL(s,x,i,ans);
    cout << "The last occurence is : " << ans << endl;
    return 0;
}