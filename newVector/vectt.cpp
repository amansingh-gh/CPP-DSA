#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n;
  cout << "Enter the value of n: ";
  cin >> n;
  vector<int>arr(n);
  // vector<int>arr{50,50};

  // for(int i=0; i<arr.size(); i++){
  //   cin >> arr[i*2];
  // }

  cout << arr.empty();


  return 0;
} 