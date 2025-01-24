#include<stdio.h>
#include<math.h>
void arrSum(int arr[], int size){
    int evenSum,oddSum = 0;
    for(int i=0; i<size; i++){
        if(arr[i] %2==0){
        evenSum += arr[i];
        }
        else{
            oddSum += arr[i];
        }
    }
    printf("Even sum is: %d\n",evenSum);
    printf("Odd sum is: %d\n",oddSum);
}
int main()
{
    int arr[]  ={1,2,3,4,5};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    arrSum(arr,size);
    return 0;
}