// Find the first occurence of repeated number
#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int>arr, int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;
    int ans = mid;
    while(start<=end){
        if(arr[mid]==target){
            ans = -1; // store answer
            end = mid-1;  // search in left
        }
        else if(target<arr[mid]){
            end = mid-1;  // Search in left side
        }
        else{
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    
}

int main(){
    vector <int> arr{1,3,2,4,4,4,4,5,8,9};
    int target = 4;

    int res = firstOccurence(arr,target);
    cout << "The first occurence index position is : " << res<< endl;
    return 0;


    
}