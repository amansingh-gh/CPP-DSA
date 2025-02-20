#include<iostream>
#include<vector>
using namespace std;

vector<int>bs2d(int arr[][3], int row, int col, int target){
    int st = 0;
    int end = row*col -1;
    

    while(st<=end){
        int mid = st+(end-st)/2;
        int rowIdx = mid/col;
        int colIdx = mid%col;
        int midVal = arr[rowIdx][colIdx];
        if(midVal == target){
            return {rowIdx, colIdx};
        }
        else if(midVal<target){
            st = mid + 1;
        }
        else{
            end = mid -1;
        }
        mid = st+(end-st)/2;
        
    }
    return {-1,-1};

}

int main(){
    int arr[4][3] = {
    {1,2,3},
    {5,6,7},
    {9,10,11},
    {13,14,15}};
    
    int row = 4;
    int col = 3;
    int target = 14;

    vector<int>ans = bs2d(arr,row,col,target);
    cout << " " <<ans[0] << " "<<ans[1];

    return 0;
}