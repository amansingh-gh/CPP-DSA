<<<<<<< HEAD
#include<iostream>
#include <climits>
using namespace std;

int maxCount(int arr[], int size){
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {1,2,30,8,9,7,4};
    int size  = sizeof(arr)/sizeof(arr[0]);
    int ans = maxCount(arr,size);
    cout << "The max number is : "<< ans << endl;
    return 0;
=======
#include<iostream>
#include <climits>
using namespace std;

int maxCount(int arr[], int size){
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {1,2,30,8,9,7,4};
    int size  = sizeof(arr)/sizeof(arr[0]);
    int ans = maxCount(arr,size);
    cout << "The max number is : "<< ans << endl;
    return 0;
>>>>>>> 7c769e20af7d65031828b4f3f8d8db8d8c0b064e
}