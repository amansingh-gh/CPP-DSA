#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int>&arr){
  int st = 0, i=0, end = arr.size()-1;
  
  while(st<=end){
    if(arr[st]==0){
      swap(arr[st], arr[i]);
      i++; st++;
    }
    else if(arr[i]==1){  
      swap(arr[st],arr[end]);
        // i++;
        end--;
      }
      else{
        st++;
      }
    }
  }

int main(){
  vector<int>arr{0,1,1,0,1,0,1,0,0};
  sort01(arr);
  cout << "Sorted array is : ";
  for(auto val : arr){
    cout << val << " ";
  }
  return 0;
}