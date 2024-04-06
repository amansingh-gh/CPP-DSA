#include<iostream>
#include<vector>
using namespace std;

int bs(int arr[], int st, int end, int target){
    while(st<=end){
        int mid = (st+end)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(target>arr[mid]){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

// METHOD 1 (FIND THE LAST ELEMENT AND COMPARE IT TILL NEARBY)
int expoSearch1(int arr[], int n, int target){
    if(arr[0]==target){ return 0;}

    int i=1;
    while(i<n && arr[i]<=target){
        i*=2;
    }
    return bs(arr, i/2, min(i,n-1), target);
}


// METHOD 2 (USING 2 POINTRE APPROACH)
int expoSearch2(int arr[], int n, int target){
    int i=0;
    int j=1;
    while(arr[j]<target){
        j = j*2;
    }
    return bs(arr,i,j,target);
}

int main(){
    int arr[] = {3,4,5,6,11,13,14,15,56,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 56;
    int ans1 = expoSearch1(arr,n,target);
    int ans2 = expoSearch2(arr,n,target);
    cout << "METHOD 1:: The index at " << ans1 << " Position" << endl;
    cout << "METHOD 2:: The index at " << ans2 << " Position" << endl;
    return 0;
}