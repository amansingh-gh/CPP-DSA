#include<iostream>
#include<string.h>
using namespace std;
int charLength(char ch[]){
    int length = 0;
    int i=0;

    while(ch[i] != '\0'){
        length++;
        i++;
    }
    return length;
}

int main(){
    char ch[100];
    cin >> ch;
    cout << "Length is : " << charLength(ch) << endl;


    // predefine function to find the length
    cout << "Length is: -> " << strlen(ch) << endl;
    return 0;
}