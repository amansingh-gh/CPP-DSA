#include<iostream>
#include<string.h>
using namespace std;


void rmvSP(char ch[]){
    int i=0;
    int j=strlen(ch);
    for(; i<j; i++){
        if(ch[i]==' '){
             ch[i] = '@';
        }
    }
}

int main(){
    char ch[100];
    cout << "Enter your string here: ";
    cin.getline(ch, 100);

    rmvSP(ch);

    cout << ch;
    return 0;
}