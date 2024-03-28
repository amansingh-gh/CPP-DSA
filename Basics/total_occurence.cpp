#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int>arr, int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;
    int ans = 0;
    while(start<=end){
        if(arr[mid]==target){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]>target){
            end = mid-1;

        }
        else{
            start  = mid+1;
        }
        mid = start+(end-start)/2;
    }
}
int lastOccurence(vector<int>arr, int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;
    int ans = 0;
    while(start<=end){
        if(arr[mid]==target){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]>target){
            end = mid-1;

        }
        else{
            start  = mid+1;
        }
        mid = start+(end-start)/2;
    }
}


int totalOccurence(int lastOccurence, int firstOccurence){
    int res = firstOccurence-lastOccurence+1;
    return res;
}

int main(){
    vector<int> arr{1,2,3,3,3,3,3,4,5,6,7};
    int target = 3;
    int first = firstOccurence(arr,target);
    int last  = lastOccurence(arr,target);
    int res  = totalOccurence(first,last);
    cout << "The first occurence at index: " << first << endl;
    cout << "The last occurence at index: " << last << endl;
    cout << "The total occurence is : "<<  res << endl;
}