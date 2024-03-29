#include<iostream>
using namespace std;

void transposeMatrix(int arr[][3], int row, int col){
    int transpose[3][3];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            transpose[i][j] = arr[j][i];
        }
    }
    cout << "Printing Transpose : "<< endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }  
}

int main(){
    int arr[3][3] = {
    {10,20,30}, 
    {40,50,60},
    {70,80,90}};

    int row = 3;
    int col = 3;

    transposeMatrix(arr, row, col);

    return 0;
}