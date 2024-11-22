#include<iostream>
#include<vector>
using namespace std;

int nearlySorted(vector<int>v, int target){
    int st = 0;
    int end = v.size()-1;


    while(st<=end){
    int mid = st + (end-st)/2;
    if(target == v[mid]){
        return mid;
    }
    if(mid+1<v.size() && v[mid+1]==target){
        return mid+1;
    }
    if(mid-1>=0 && v[mid-1]==target){
        return mid-1;
    }

    if(v[mid]<target){
        st = mid + 2;
    }
    else{
        end = mid - 2;
    }
         mid = st + (end-st)/2;
    }
    return -1;
}

int main(){
    vector<int>arr{10, 3, 40, 20, 50, 80, 70};
    int target = 70;

    int ans = nearlySorted(arr,target);
    cout << "Your target is in " << ans << " index";

    return 0;
}