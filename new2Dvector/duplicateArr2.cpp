#include<iostream>
#include<vector>
using namespace std;

int duplicateFindd(vector<int>arr){
    int ans = -1, i=0;
    while(i<arr.size()){
      int index = abs(arr[i]);
      if(arr[index]<0){
        ans = index;
         break;
      }
      arr[index]*=-1;
      i++;
    }
    return ans;
  }

int main(){
  vector<int>arr{1,3,4,2,2};
  int ans = duplicateFindd(arr);
  cout << "The duplicate is : "<< ans;
  return 0;
}