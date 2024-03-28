#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr{5,4,3,2,1};
  int n = arr.size();
  for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
      swap(arr[i],arr[j]);
    }
  }
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}