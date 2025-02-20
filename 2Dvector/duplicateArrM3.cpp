#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int duplicateFinddM3(vector<int>nums){
  while(nums[0]!=nums[nums[0]]){
    swap(nums[0], nums[nums[0]]);
  }
  return nums[0];
  }

int main(){
  vector<int>arr{1,3,4,2,2};
  int ans = duplicateFinddM3(arr);
  cout << "The duplicate is : "<< ans;
  return 0;
}