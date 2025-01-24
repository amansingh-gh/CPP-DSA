#include<stdio.h>
#include<math.h>
int arrSum(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[]  ={10,20,30,40,50};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = arrSum(arr,size);
    printf("Sum is: %d",ans);
    return 0;
}