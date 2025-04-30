#include<stdio.h>
int main(){
    int arr[] = {5,4,7,9,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size-1; i++){
        int smallIdx = i;
        for(int j=i+1; j<size; j++){
            if(arr[j]< arr[smallIdx]){
                smallIdx = j;
            }
        }
        int temp = arr[smallIdx];
        arr[smallIdx] = arr[i];
        arr[i] = temp;
    }

    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}