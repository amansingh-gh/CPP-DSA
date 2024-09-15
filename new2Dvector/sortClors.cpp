#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>&arr){
  int st=0, mid = 0, end = arr.size()-1;
  while(mid<=end){
    if(arr[mid]==0){
      swap(arr[st], arr[mid]);
      mid++;st++;
    }
    else if(arr[mid]==1){
      mid++;
    }
    else{
      swap(arr[mid],arr[end]);
      end--;
    }
  }

  // sort(arr.begin(), arr.end());

  for(int i=0; i<arr.size();i++){
    cout << arr[i] << " ";
  }
}

int main(){
    vector<int>arr{0,1,1,1,0,0,2,2,0,1,2,1,0,1};
    sortColors(arr);


  return 0;
}