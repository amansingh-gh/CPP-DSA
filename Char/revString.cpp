#include<iostream>
#include<string>
using namespace std;

int getLength(char name[]){
    int i=0;
    int len = 0;
    while(name[i]!='\0'){
        len++;
        i++;
    }
    return len;
}

void revString(char name[], int length){
    int st=0, end = length-1;
    while(st<=end){
        swap(name[st], name[end]);
        st++;   
        end--;
    } 
}

int main(){
    char name[] = "Aman";
    int len = getLength(name);
    
    revString(name,len);

    cout << name ;
    return 0;
}