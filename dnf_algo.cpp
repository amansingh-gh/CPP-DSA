// Dutch national flag algorithm
#include<iostream>
using namespace std;


void moveAllNegtoLeft(int *arr, int n){
    int l=0, h=n-1;
    while(l<h){
        if(arr[l]<0){
            l++;
        }
        else if(arr[h]>0){
            h--;
        }
        else{
            swap(arr[l],arr[h]);
        }
    } 
}
int main(){
    int arr[] = {-3,-2,1,4,-7,8,-1};
    int h = sizeof(arr)/sizeof(int);
    // int l=0, h=n-1;
     moveAllNegtoLeft(arr,h);

    for(int i=0; i<h; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}