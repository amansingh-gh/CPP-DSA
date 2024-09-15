#include<iostream>
using namespace std;
void firstRepeating(int arr[], int n){
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(arr[i]==arr[j]){
          cout << "The repeating element index is: "<< i << endl;

          cout << "The repeating element  is: "<< arr[i] << endl;

      }
    }
  } 
}
int main(){
  int arr[] = {1,5,3,4,3,5,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  firstRepeating(arr,n);
  return 0;
}