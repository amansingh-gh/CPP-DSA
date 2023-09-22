#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>&arr, int s, int e, int& key){
    if(s>e) return -1;
    
    int mid = (s+e)/2;
    if(arr[mid]==key) return mid;

    return arr[mid]<key ? binarySearch(arr,mid+1,e,key) : binarySearch(arr,s,mid-1,key);
}

int main(){
    vector<int>arr{10,20,30,40,50,66,80};
    int target = 66;
    int start = 0;
    int end = arr.size()-1;
    int res = binarySearch(arr , start, end, target);
    cout << "The position is : " <<  res << endl;
    return 0;
}