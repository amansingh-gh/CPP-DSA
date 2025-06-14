#include<iostream>
using namespace std;

void linSearch(int arr[], int size,int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            cout << "The target is: "<< target << " at index of : "<<i<<endl;
        }
    }
}

int main(){
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 40;
    linSearch(arr,size,target);
    return 0;
}