#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>&arr, int s, int e, int key){
  //base case
  if(s>e) return -1;
  

  int mid  = (s+e)/2;
  if(arr[mid]==key){
    return mid;
  }

  return (arr[mid]<key)?binarySearch(arr,mid+1,e,key):binarySearch(arr,s,mid-1,key);
}

int main(){
  vector<int>arr{10,20,30,40,50,55,500};
  int n = arr.size();
  int target = 500;
  int start = 0;
  int end = n-1;
  int ans  = binarySearch(arr,start,end,target);
  cout << ans << endl;
  return 0;
}
