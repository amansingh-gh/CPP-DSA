#include<iostream>
#include<string.h>
using namespace std;

bool chkPlindrome(char ch[]){
    int i=0;
    int n=strlen(ch)-1;
    
    while(i<=n){
        if(ch[i]!=ch[n]){
            return false;
           
        }
        else{
             i++; n--;
        }
    }
    return true;
}

int main(){
    char ch[100];
    cout << "Enter the string: ";
    cin >> ch;

    
    cout << chkPlindrome(ch);

    return 0;
}