#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int firstOcc(vector<int>&arr, int target){
    int st = 0, end = arr.size()-1;
    int ans = INT_MIN;
    while(st<end){
        int mid = st+(end-st)/2;
        if(target==arr[mid]){
            ans = mid;
            end = mid -1;
        }
        else if(target<arr[mid]){
            end = mid-1;
        }
        else{
            st = mid +1;
        }
    }
    return ans;
}

int main(){
    vector<int>arr{1,3,2,4,4,4,4,6,7,7,9};
    int target = 4;
    int res = firstOcc(arr,target);
    cout << "Found at index : "<<res << endl;
    return 0;
}