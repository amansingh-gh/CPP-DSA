#include<iostream>
using namespace std;

void printArrRec(int arr[], int n, int i){
    if(i>=n) return;
    cout << arr[i] << " ";
    printArrRec(arr,n,++i);
}

int main(){
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i=0;

    printArrRec(arr,size,i);
    return 0;
}