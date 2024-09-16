#include<iostream>
using namespace std;
void findKey(int arr[][2], int key, int row, int cols){
  for(int i=0 ; i<row; i++){
    for(int j=0; j<cols; j++){
      if(arr[i][j]==key){
        cout << "Key found at : "<< i << "," << j << endl;
      }
    }
  }
}
int main(){
  int arr[3][2] = {{1,2},{3,4},{5,6}};
  int key = 5;
  int row = 3;
  int cols = 2;
  findKey(arr,key, row,cols);
  return 0;
}