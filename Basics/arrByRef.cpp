#include<iostream>
using namespace std;

int printArr(int brr[], int size){
    brr[0] = brr[0]+10;
    cout << brr[0];
}

int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = printArr(arr,size);
    cout << ans;
    return 0;
}