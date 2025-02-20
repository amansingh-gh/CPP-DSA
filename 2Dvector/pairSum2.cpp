#include<iostream>
using namespace std;

int main(){
  int arr[] =  {1,3,5,7};
  int sum = 10;
  int st = 0;
  int end = sizeof(arr)/sizeof(arr[0]);
  
  for(int i=0; i<end; i++){
    for(int j=i+1; j<end; j++){
      if(arr[i]+arr[j]==sum){
        cout << "(" << arr[i] << "," << arr[j] << ")" ;
      }
    }
  } 
  return 0;
}