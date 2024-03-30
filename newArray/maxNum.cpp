#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[], int size, int max){
    int i;
    for(i=0; i<size; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {5,7,100,8,59,23};
    int size = 6;
    int max = INT_MIN;
    
    int ans = findMax(arr,size,max);
    cout << "The max number is : " << ans << endl;

    return 0;
}