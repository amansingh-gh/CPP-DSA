#include<stdio.h>
#include<math.h>
int main(){
    int arr[] = {10,50,70,66,99,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 70;

    for(int i=0; i<size-1; i++){
        if(arr[i]==key){
            printf("%d found\n", key);
        }
    }
    return 0;
}