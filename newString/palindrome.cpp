#include<iostream>
using namespace std;

bool newChkPalin(string s, int i, int j){
    while(i <= j){
        if(s[i] != s[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}


bool chkPalindrome(string s){
    int i = 0;
    int j = s.length();
    while(i <= j){
        if(s[i] == s[j]){
            i++;
            j--;
        }
        else{
            return newChkPalin(s, i + 1, j) || newChkPalin(s, i, j - 1);
        }
    }
    return true;
}

int main(){
    string s = "anxtna";
    int ans = chkPalindrome(s);
    cout << ans;
    return 0;
}
