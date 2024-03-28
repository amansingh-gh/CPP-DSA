#include<iostream>
#include<vector>
using namespace std;

int pivotElement(vector<int>arr){
    int s=0;
    int e =arr.size()-1;
    int mid = s +(e-s)/2;
    while(s<=e){
        if(s==e){
            return s;
        }
        if(arr[mid+1]<=e && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(arr[mid-1]>=s && arr[mid-1]<arr[mid]){
            return mid-1;
        }
        if(arr[s]>arr[mid]){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}


int main(){
    vector<int> arr{5};
    int ans = pivotElement(arr);
    if(ans==-1){
        cout << "Something Wrong";
    }
    else{
        cout << "Your index is " << ans<< endl;
        cout << "Your element is : " << arr[ans] << endl;
    }
}