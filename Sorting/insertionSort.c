#include<stdio.h>
int main(){
    int arr[] = {1,5,7,9,3,4,6,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=1; i<size; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }


    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}