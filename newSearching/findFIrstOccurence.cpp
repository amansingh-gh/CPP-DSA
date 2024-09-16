#include<iostream>
#include<vector>
using namespace std;

int firstOccur(vector<int>v, int target){
    int s = 0;
    int e = v.size()-1;
    int store = -1;

    while(s<=e){
        int mid = s+(e-s)/2;
        if(v[mid]==target){
            store = mid;
            e = mid -1;  // First Occurence
            s = mid+1; // Last Occurenece
        }
        else if(target<v[mid]){
            e = mid-1;
        }
        else if(target>v[mid]){
            s = mid + 1;
        }
       
    }
     return store;
}

int main(){
    vector<int>arr{1,2,2,2,4,4,4,4,5,8};
    int target = 4;
    int ans = firstOccur(arr, target);
    cout << "The first occurence is : " << ans << endl;

    return 0;
}