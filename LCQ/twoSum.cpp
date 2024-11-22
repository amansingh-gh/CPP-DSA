#include<iostream>
#include<vector>
using namespace std;

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

vector<int>twosum(vector<int>arr, int target){
    vector<int>ans{-1,-1};

    for(int i=0; i<=arr.size()-1; i++){
        for(int j=i+1; j<=arr.size()-1; j++){
            if(arr[i]+arr[j] == target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

int main(){
    vector<int>arr{2,7,11,15};
    int target = 26;
    vector<int>ans = twosum(arr,target);
    cout << "(" << ans[0] << "," << " " << ans[1] << ")";
    return 0;
}