#include<iostream>
using namespace std;

bool linearSearch2D(int arr[][3], int row, int col, int key){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(key==arr[i][j]){
                return true;
            }
        }
    }
        return false;
}

int main(){
    int arr[2][3] = {
    {10,20,30},
    {40,500,60}};

    int row = 2;
    int col = 3;
    int key  = 5000;

    cout << linearSearch2D(arr,row,col,key);

    return 0;
}