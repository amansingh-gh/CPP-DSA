#include<iostream>
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

void conUpr(char arr[]){
    int n = getLength(arr);
    for(int i=0; i<n; i++){
        if(arr[i]>='a' && arr[i]<='z'){
        arr[i] = arr[i] - 'a' + 'A';
    }
}
}

void conLwr(char arr[]){
    int n = getLength(arr);
    for(int i=0; i<n; i++){
        if(arr[i]>='A' && arr[i]<='Z'){
            arr[i] = arr[i] - 'A' + 'a';
        }
    }

}

int main(){
    char arr[100] = "sAm";
    // conUpr(arr);
    conLwr(arr);
    cout << arr;
    return 0;
}