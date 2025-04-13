#include<iostream>
#include<vector>
using namespace std;
void binSearch(vector<int>&arr, int target){
    int st = 0;
    int end = arr.size()-1;
    while(st<=end){
        int mid = st + (end - st) / 2;
        if(arr[mid]==target){
            cout << "Found at index: " << mid;
            return;
        }
        else if(arr[mid]>target){
            end = mid -1;
        }
        else{
            st = mid + 1;
        }
    }
    cout << "Not found" << endl;
}

int main(){
    vector<int>arr = {10,20,30,40,50};
    int target = 30;
    binSearch(arr,target);
    return 0;
}