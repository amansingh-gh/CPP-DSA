#include<iostream>
using namespace std;

void linear(int arr[], int size, int key){
        for(int i=0; i<size; i++){
            if(arr[i] == key){
                cout << "Key Found and the key is: "<< key;
            }
        }
}

int main(){
    int arr[]={10,20,30,40,50};
    int key = 30;
    int size = sizeof(arr)/sizeof(arr[0]);
    linear(arr,size,key);
    return 0;
}