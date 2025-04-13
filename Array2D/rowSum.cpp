#include<iostream>
#include<vector>
using namespace std;

void printRowSum(int arr[][4], int row, int col){
    int sum = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}

int main(){ 
    int arr[3][4] = {{10,20,30,40}, {40,50,60,20}, {4,4,1,1}};
    int row = 3;
    int col = 4;

    printRowSum(arr, row, col);


    return 0;
}