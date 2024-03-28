#include<iostream>
#include <vector>
using namespace std;

void printSubArrayUtil(vector<int>&nums, int start, int end){
    if(end == nums.size()) return;
    for(int i=start; i<=end; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    printSubArrayUtil(nums,start,end+1);
}

void printSubarry(vector<int>&nums){
    for(int start=0; start<nums.size(); start++){
        int end = start;
        printSubArrayUtil(nums,start,end);
    }
}

int main(){
    vector<int>nums{1,2,3,4,5};
    printSubarry(nums);
    return 0;
}