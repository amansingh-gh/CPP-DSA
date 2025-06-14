<<<<<<< HEAD
#include<iostream>
using namespace std;

void revInt(int arr[], int size, int st, int end){
   while(st<=end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int st = 0;
    int end = size-1;
    revInt(arr,size,st,end);
     
    return 0;
=======
#include<iostream>
using namespace std;

void revInt(int arr[], int size, int st, int end){
   while(st<=end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int st = 0;
    int end = size-1;
    revInt(arr,size,st,end);
     
    return 0;
>>>>>>> 7c769e20af7d65031828b4f3f8d8db8d8c0b064e
}