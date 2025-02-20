#include<iostream>
#include<vector>
using namespace std;

int binSearch(vector<int>arr, int target){
    int start = 0;
    int end = arr.size()-1;
    while(start<end){
        int mid = start+(end - start)/2;
        if(target == arr[mid]){
            return mid;
        }
        else if(target<arr[mid]){
            end= mid - 1;
        }
        else{
            start = mid + 1;
        }
        
    }
    return -1;
}


int main(){
    vector<int>arr{100,200,300,400,500};
    int target = 100;
    int ans = binSearch(arr,target);
    cout << "Found at index: " <<ans<< endl;
    return 0;
}