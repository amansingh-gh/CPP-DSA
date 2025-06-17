#include<iostream>
#include<vector>
using namespace std;

int findPeak(const vector<int>&arr){
    int st = 0, end = arr.size()-1;
    while(st<end){
        int mid = st+(end-st)/2;
        if(arr[mid]<arr[mid+1]){
            st = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return arr[st];
}

int main(){
    vector<int>arr{7,3,9,2,1};
    int res = findPeak(arr);
    cout << "Peak element is: ";
    cout << res;

    return 0;
}