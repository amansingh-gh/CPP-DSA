#include<iostream>
#include<algorithm>
using namespace std;

void findDupli(int arr[], int size){
  // sort(arr.begin(), arr.end());
  sort(arr, arr+size);
  for(int i=0; i<size-1; i++){
    if(arr[i] == arr[i+1]){
      cout << "Duplicate found : "<<arr[i] << endl;
    }
  }
  
}

int main(){
  int arr[] = {4,1,2,2,7,7,1,5};
  int size = sizeof(arr)/sizeof(arr[0]);
  findDupli(arr,size);
  return 0;
}