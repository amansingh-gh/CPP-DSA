#include<iostream>
#include<vector>
using namespace std;

vector<int>firstOccur(vector<int>v, int target){
    vector<int>occ{-1,-1};
    int s = 0;
    int e = v.size()-1;

    // First Occcurence
    while(s<=e){
        int mid = s+(e-s)/2;
        if(v[mid]==target){
            occ[0] = mid;
            e = mid -1;  // First Occurence
        }
        else if(target<v[mid]){
            e = mid+1;
        }
        else if(target>v[mid]){
            s = mid + 1;
        }
       
    }
        s = 0;
        e = v.size()-1;
        while(s<=e){
        int mid = s+(e-s)/2;
        if(v[mid]==target){
            occ[1] = mid;
            s = mid +1;  // Last Occurence
        }
        else if(target<v[mid]){
            e = mid-1;
        }
        else if(target>v[mid]){
            s = mid + 1;
        }
       
    }
     return occ;
}

int main(){
    vector<int>arr{1,2,2,2,4,4,4,4,5,8};
    int target = 4;
    vector<int>res = firstOccur(arr, target);
    for(auto i : res){
        cout << i << " ";
    }
   

    return 0;
}