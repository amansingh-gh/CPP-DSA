#include<iostream>
#include<string.h>
using namespace std;

bool chkPalindrome(char name[]){
    int st=0; int end = strlen(name)-1;
    while(st<=end){
        if(name[st] != name[end]){
            return false;
        }
        else{
            st++, end--;
        }
    }
    return true;
}

int main(){
    char name[100];
    cout << "Enter name: ";
    cin.getline(name,100);
    bool ans = chkPalindrome(name);
    if(!ans){
        cout << "Not Palindrome";
    }
    else{
        cout << "Palindrome";
    }
    return 0;
}