#include<iostream>
using namespace std;

void rowWiseAccess(int arr[][3], int row, int cols){
  cout << "Enter an Input: "<< endl;
  for(int i=0; i<row; i++){
    for(int j=0; j<cols; j++){
      cin >> arr[i][j];
    }
  }

    int sum = 0 ;
  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      sum = sum + arr[i][j];
    }
    cout << "The row wise sum is: " << sum << endl;
  }

  for(int i=0; i<cols; i++){
    int Colsum = 0 ;
    for(int j=0; j<row; j++){
      Colsum = Colsum + arr[j][i];
    }
    cout << "The col wise sum is: " << Colsum << endl;
  }
}


int main(){
  int arr[2][3];
  int row = 2, cols = 3;
  rowWiseAccess(arr,row,cols);
  return 0;
}