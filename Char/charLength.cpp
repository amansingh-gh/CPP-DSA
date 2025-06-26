#include<iostream>
#include<string.h>
using namespace std;
int charLength(char name[]){
    int len=0;
    int i=0;
    while(name[i]!='\0'){
        len++;
        i++;
    }
    return len;
}

int main(){
    char ch[100];
    cout << "Enter name :: ";
    cin >> ch;
    cout << "Length is : " << charLength(ch) << endl;


    // predefine function to find the length
    cout << "Length is: -> " << strlen(ch) << endl;
    return 0;
}