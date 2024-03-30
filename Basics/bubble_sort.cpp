#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{10,7,5,8,2,6,1,9};
    int n = arr.size();
    for(int i=1; i<n; i++){
        int swapCount = 0;
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapCount++;
            }
        }
        if(swapCount==0){
            break;
        }
    }
    for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}
