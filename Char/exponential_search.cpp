#include<iostream>
using namespace std;

int bs(int a[], int start, int end, int target){
    while(start<=end){
        int mid = start+(end-start)/2;
        if(a[mid]==target){
            return mid;
        }
        else if(target>a[mid]){
            start = mid+1; 
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int expSearch(int a[] , int n, int x){
    if(a[0]==x) return 0;
    int i=1;
    while(i<n && a[i]<=x){
        i = i*2;
    }
    return bs(a, i/2, min(i,n-1),x);
}


int main(){
    int a[]= {3,4,5,6,11,13,14,15,56,70};
    int n = sizeof(a)/sizeof(a[0]);
    int x = 13;
    int res =  expSearch(a,n,x);
    cout << "The index is: " << res << " and the target is : " << res[a] << endl;
}