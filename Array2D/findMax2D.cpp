#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[][3], int row, int col, int max){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]>max)
                max = arr[i][j];
        }
    }
        return max;
}

int main(){
    int arr[3][3] = {{10,120,30},{7,9,50},{12,17,19}};
    int row = 3, col = 3;

    int max = INT_MIN;
    int ans = findMax(arr,row,col,max);
    cout << "The max number in 2D array is : " << ans;

    return 0;
}