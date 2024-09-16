#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int>a{1,3,5,7};
  vector<int>b{2,8,7,5,9};
  int sum = 10;
  int i = 0,j=i+1;

  while(i<a.size(), j<b.size()){
    if(a[i]+b[j]==sum){
      cout << "The pair is: ("<<a[i]<<","<<b[i]<< ")";
    }
    else {
      break;
    }
  }
  return 0;
}