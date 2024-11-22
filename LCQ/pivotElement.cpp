#include<iostream>
#include<vector>
using namespace std;

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
}


int main(){
    vector<int>v{2};
    int ans = findPivot(v);
    cout << ans << endl;
    return 0;
}