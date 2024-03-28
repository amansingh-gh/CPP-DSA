class Solution {
public:
    int robHelper(vector<int>&nums, int i){
        if(i>=nums.size()) return 0;

        int rob1 = nums[i] + robHelper(nums,i+2);
        int rob2 = 0 + robHelper(nums,i+1);

        return max(rob1,rob2);
    }
    int rob(vector<int>& nums) {
        return robHelper(nums,0);
    }
};