#include<iostream>
#include<vector>
using namespace std;

int fistOcc(vector<int>arr){
    int st = 0;
    int end = arr.size()-1;
    int mid = st + (end - st)/2;
    int target = 4, index=-1;
    while(st<end){
        if(arr[mid]==target){
            index = mid;
            end = mid -1;
        }
        else if(target >arr[mid]){
            st = mid + 1;
        }
        else if(target<arr[mid]){
            end = mid - 1;
        }
        mid = st +(end-st)/2;        
    }
}

int main(){
    vector<int>arr{1,2,4,4,4,4,9,11,17};
    int res = fistOcc(arr);
    cout << "The first occ is: " << res << endl;
    return 0;
}