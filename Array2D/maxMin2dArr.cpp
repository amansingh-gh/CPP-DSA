#include<iostream>
using namespace std;

void minMax(int arr[][2], int row, int cols){
  int min =arr[0][0];
  int max =arr[0][0];
  for(int i=0 ; i<row; i++){
    for(int j=0; j<cols; j++){
      if(arr[i][j] < min){
        min = arr[i][j];
      }
      if(arr[i][j]>max){
        max = arr[i][j];
      }
    }
  }
  cout << "The max is : "<<max <<endl;
  cout << "The min is : "<<min;

}

int main(){
  int row = 2, cols = 2;
  int arr[2][2] = {
    {11,22},
    {3,4}
  };
  minMax(arr,row,cols);
  return 0;
}