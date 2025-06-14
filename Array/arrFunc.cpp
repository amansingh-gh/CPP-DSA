#include<iostream>
using namespace std;

void printArr(int arr[], int size){
    int i;
    for(i=0; i<size; i++){
        cout <<"Call from printArr " <<arr[i] << endl;
    }
}

void inc(int arr[], int size){
    arr[0] =arr[0]+10;
    printArr(arr,size);
}
 

int main(){
    int arr[] = {5,6};
    int size = 2;

    inc(arr,size);
    printArr(arr,size);

    return 0;
}