#include<iostream>
using namespace std;


int findMatrixIndex(int arr[][4], int rows, int cols, int target){
    int start = 0;
    int toatalSize = rows*cols;
    int end = toatalSize-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        int rowIndex = mid/cols;
        int colIndex = mid % cols;
        int element= arr[rowIndex][colIndex];
        if(element==target){
            return true;
        }
        else if(element > target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    mid = start+(end-start)/2;
    }
    return false;
}
int main(){
    int arr[5][4]  ={ {1,2,3,4}, {5,6,7,8,} , {9,10,11,12}, {13,14,15,16}, {17,18,19,20}  };
    int rows = 5;
    int col =4;

    int target = 11;

    bool ans = findMatrixIndex(arr,rows,col,target);
    if(ans){
        cout << "Found";
    }
    else{
        cout << "Not Found";
    }

    return 0;
}
 