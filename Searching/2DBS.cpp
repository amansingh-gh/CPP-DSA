#include<iostream>
using namespace std;

bool binarSearch2D(int arr[][3], int row, int col){
    int st = 0;
    int end = row*col - 1;
    int mid = st + (end - st)/2;
    int target =60;
    while(st<=end){
        int rowIndex = mid/col;
        int colIndex = mid % col;
        if(arr[rowIndex][colIndex] == target){
            cout << "Found at: " << rowIndex << " " << colIndex << endl;
            return true;
        }
        if(arr[rowIndex][colIndex] < target){
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = st + (end - st)/2;
    }
    return false;
}

int main(){
    int arr[][3] = {
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };
    int row = 3;
    int col = 3;
    bool ans = binarSearch2D(arr,row,col);
    cout << ans << endl;
    return 0;
}