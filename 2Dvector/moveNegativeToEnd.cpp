#include<iostream>
#include<vector>
using namespace std;

void moveToEnd(vector<int>arr){
  int l = 0, h= arr.size()-1;
  while(l<h){
    if(arr[l]>0){
      l++;
    }
    else{
      swap(arr[l],arr[h]);
      h--;
    }
  }
  cout << "The sorted values are:: ";
  for(auto val : arr){
    cout << val << " ";
  }
}

int main(){
  vector<int>arr{1,6,-4,-2,1,0,1,-3};
  moveToEnd(arr);
  return 0;
}