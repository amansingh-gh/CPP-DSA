#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums{1,1,0,2,0,1,2,0,1};
    int i=0, m=0, h=nums.size()-1;
    while(m<=h){
        if(nums[m]==0){
            swap(nums[i],nums[m]);
            i++,m++;
        }
        else if(nums[m]==1){
            m++;
        }
        else{
            swap(nums[m],nums[h]);
            h--;
        }
    }


    return 0;
}