#include<iostream>
#include<vector>
using namespace std;

void fixArr2(int arr2[], int m){
    for(int i=1; i<m; i++){
        if(arr2[i]<arr2[i-1]){
            int temp = arr2[i];
            arr2[i] = arr2[i-1];
            arr2[i-1] = temp;
        }
    }
}

int main(){
    int arr1[] = {1,3,5,7};
    int arr2[] = {0,2,6,8,9};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    int i=0, j=0;

    while(i<n){
        if(arr1[i]>arr2[j]){
            // swap(arr1[i],arr2[j]);
            int temp = arr1[i];
            arr1[i] = arr2[j];
            arr2[j] = temp;
            fixArr2(arr2,m);
        }
        i++;
    }


        for(int i = 0; i < n; i++) cout << arr1[i] << " ";
        cout << endl;
        for(int i = 0; i < m; i++) cout << arr2[i] << " ";


    return 0;
}