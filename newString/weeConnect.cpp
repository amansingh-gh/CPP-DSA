#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(char first, char second){
  cout << "First is: "<<first;
  cout << "  Second is: "<<second<<endl;
  return first > second;
}

bool compare(int a, int b){
  cout << "First is: "<<a;
  cout << "  Second is: "<<b<<endl;
  return a > b;
}

int main() {
  string a = "amansingh";
  sort(a.begin(), a.end(), cmp);
  cout << a << endl;

  // int arr[]= {10,20,30,80,47,59};
  vector<int>arr{10,20,30,80,47,59};
  sort(arr.begin(), arr.end(),compare);
  for(auto i : arr){
    cout << i << " ";
  }

return 0;
}