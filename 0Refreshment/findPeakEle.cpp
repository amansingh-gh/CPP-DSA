#include<iostream>
#include<vector>
using namespace std;

int findPeakEle(vector<int>&arr){
    int st = 0, end = arr.size()-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(arr[mid]<arr[mid+1]){
            st = mid+1;
        }
        else{
            return mid;
        }
    }
}

int main(){
    vector<int>arr{0,10,50,2};
    int res = findPeakEle(arr);
    cout << "Peak element is: "<< res;
    return 0;
}