#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int>arr{1,2,4,2,1,3,6,5,5,6,4};
  int ans = 0;
  for(int i=0; i<arr.size(); i++){
    ans = ans ^ arr[i];
  }
  cout << "The unique element is: "<<ans << endl;
  return 0;
}