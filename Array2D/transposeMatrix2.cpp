#include<iostream>
using namespace std;

void transpose(int arr[][3], int row, int col, int transPose[][3]){
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      // swap(arr[i][j], arr[j][i]);
      transPose[j][i] = arr[i][j];
    }
  }
}

void printArray(int arr[][3], int row, int col){
   for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

int main(){
  int row  = 3, col=3;
  int arr[3][3] = {
    {2,3,9},
    {4,7,8},
    {5,1,6}
  };
  cout << "Before\n";
  printArray(arr,row,col);
  int transPose[3][3];
  transpose(arr,row,col, transPose);
  cout << "After\n";
  printArray(transPose,row,col);

  return 0;
}