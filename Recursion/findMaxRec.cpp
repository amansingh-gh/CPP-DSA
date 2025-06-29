#include<iostream>
#include<limits.h>
using namespace std;


void findMax(int arr[], int n, int i, int &maxi){
    if(i>=n) return;

    if(maxi<arr[i]){
        maxi = arr[i];
    }

    findMax(arr,n,++i,maxi);
}

void findMin(int arr[], int n, int i, int &mini){
    if(i>=n) return;

    if(arr[i]<mini){
        mini=arr[i];
    }


    findMin(arr,n,++i,mini);
}


int main(){
    int arr[] = {10,20,30,40,5,2};
    int size = 6;
    int i=0;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    findMax(arr,size,i, maxi);
    findMin(arr,size,i, mini);
    cout << "Max is: " << maxi << endl;
    cout << "Min is: " << mini << endl;

    return 0;
}