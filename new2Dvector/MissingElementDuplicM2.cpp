#include<iostream>
#include<vector>
using namespace std;

void findMissingDuplic(vector<int>&arr){
  int i=0;
  while(i<arr.size()){
    int index = arr[i]-1;
    if(arr[i] != arr[index]){
      swap(arr[i],arr[index]);
    }
    else{
      i++;
    }
  }
  for(int i=0; i<arr.size(); i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}


int main(){
  vector<int>arr{1,3,5,3,4};
  findMissingDuplic(arr);
  return 0;
}