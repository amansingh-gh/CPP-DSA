#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int>arr, int target){
    int st=0, end = arr.size()-1, ans=-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(target > arr[mid]){
            st = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else{
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}

int lastOcc(vector<int>arr, int target){
    int st=0, end = arr.size()-1, ans=-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(target > arr[mid]){
            st = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else{
            ans = mid;
            st = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int>arr{1,3,4,4,4,4,4,6,7,9};
    int target = 4;
    int first = firstOcc(arr,target);
    int last = lastOcc(arr,target);

    int total = last - first + 1;
    cout << "Total occurence is: " << total;

    return 0;
}