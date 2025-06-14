#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include <set>  
using namespace std;


class Solution {
public:
    int bs(vector<int>&nums, int st, int x){
        int end = nums.size()-1;
        while(st <= end){
            int mid = (st+end)/2;
            if(nums[mid] ==x ){
                return mid;
            }
            else if(x>nums[mid]){
                st = mid + 1;
            }
            else{
                end = mid-1;
            }
        }
        return -1;
    }

    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        set<pair<int,int>>ans;

        for(int i=0; i<nums.size(); i++){
            if(bs(nums, i+1, nums[i]+k) != -1){
                ans.insert({nums[i], nums[i]+k});
            }
        }
        return ans.size();
    }
};


int main(){

    return 0;
}