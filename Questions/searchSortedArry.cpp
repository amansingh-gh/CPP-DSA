#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int findPivot(vector<int>&v){
    int st = 0;
    int end = v.size()-1;
    while(st<=end){
        if(st==end){
            return st;
        }  
        int mid = st + (end-st)/2;
        if(mid+1 <= end && v[mid] > v[mid+1]){
            return mid;
        }
        if(mid-1>= 0 && v[mid] < v[mid-1]){
            return mid-1;
        }
        if(v[st]>v[mid]){
            end = mid-1;
        }
        else{
            st = mid+1;
        }

        mid = st + (end-st)/2;
    }
    return -1;
}

    int binarySearch(vector<int>ar,int st, int end, int key){
 
    int mid = st+(end-st)/2;

    while(st<=end){
        if(key==ar[mid]){
            return mid;
        }
        else if(key<ar[mid]){
            end = mid-1;
        }
        else{
            st = mid+1;
        }

         mid = st+(end-st)/2;
    }
    return -1;
}

int search(vector<int>& nums, int target) {
        int pivotIndex = findPivot(nums);
        int ans = 0;
        if(target >= nums[0] && target <= nums[pivotIndex]){
            ans = binarySearch(nums,0,pivotIndex, target);
        }
        else{
            ans =  ans = binarySearch(nums,pivotIndex+1, nums.size()-1 , target);
        }
        return ans;
    }
};

int main(){
    vector<int>v{5,10,2,4,8};
    return 0;
}