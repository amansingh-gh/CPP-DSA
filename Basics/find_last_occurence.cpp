// Find the last occurence of number
#include<iostream>
#include<vector>
using namespace std;

int findLastOccurence(vector<int>arr, int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==target){
            ans= mid; //store ans
            start = mid+1;
        }
        else if(target<arr[mid]){
            end = mid-1;
        }
        else if(target>arr[mid]){
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;

}

int main(){
    vector<int>arr{1,2,4,5,5,5,5,5,7,8,10};
    int target = 5;

    int res=findLastOccurence(arr,target);
    cout << "The last occurence index number is : " << res << endl;
    
}