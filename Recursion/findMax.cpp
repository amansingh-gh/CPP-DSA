#include <iostream>
#include <limits.h>
using namespace std;

void findMax(int arr[], int n, int i, int &maxi){
    if(i>=n) return; //base case
    if(arr[i]>maxi){  // 1st solution solve
        maxi = arr[i];
    }
    findMax(arr,n,i+1,maxi);
}

void findMin(int arr[], int n, int i, int &mini){
    if(i>=n) return;
    mini = min(mini, arr[i]);
        findMin(arr,n,i+1,mini);
}

int main(){
    int arr[] = {10,20,40,50,12};
    int n = 5;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int i=0;
    findMax(arr,n,i,maxi);
    findMin(arr,n,i,mini);
    cout << "The maximum numnber is: " << maxi << endl;
    cout << "The minimum numnber is: " << mini << endl;
}