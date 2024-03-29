#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[4][3];
    int row = 4;
    int col = 3;

    // Taking row col - wise input 
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }


    // Printing
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){

        cout << arr[i][j] << " ";
        }
    cout << endl;
    }

        
    // Accessing the element in row wise
    // for(int i=0; i<2; i++){
    //     for(int j=0; j<3; j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << "Column wise print: "<< endl;
    // // Acdessign the element in col wise
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<2; j++){
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }
}