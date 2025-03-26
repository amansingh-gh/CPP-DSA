#include<iostream>
using namespace std;

void sortAll(int *arr, int size){
    int low=0, mid=0, high=size-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++; mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

void printArr(int *arr, int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {0,0,2,1,1,0,2,1,0,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    sortAll(arr,size);
    printArr(arr,size);

    return 0;
}