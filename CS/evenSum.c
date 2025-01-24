#include<stdio.h>
#include<math.h>
int arrSum(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        if(arr[i] %2==0){
        sum += arr[i];
        }
    }
    return sum;
}
int main()
{
    int arr[]  ={1,2,3,4,5};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = arrSum(arr,size);
    printf("Sum is: %d",ans);
    return 0;
}