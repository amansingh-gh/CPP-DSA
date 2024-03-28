#include <iostream>
#include <limits.h>
using namespace std;

// Q1. Soln
// int printroWise(int arr[][3], int row, int col){
//     for(int i=0; i<row; i++){
//         int sum =0;
//         for(int j=0; j<col; j++){
//             sum = sum+arr[i][j];
//         }
//         cout << endl << endl;
//     }
// }

// Q2. Sol.
bool findkey(int arr[][3], int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
}
int main()
{
    int arr[3][3] = {
        {10, 24, 39},
        {12, 45, 20},
        {77, 90, 72}};

    // For printing all values in row wise
    cout << "Row Wise Printing array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;

    // Now priniting all values  in column wise
    cout << "Column wise printing array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    // User input in 2D array (Row-Wise)

    int brr[3][3];
    int rows = 3;
    int cols = 3;
    // Input
    cout << "Enter your 2D array: ";
    for(int i=0;i<rows; i++){
        for(int j= 0; j<cols; j++){
            cin >> arr[i][j];
        }
    }

    // Printing
    cout << "Your 2D array is : "<< endl;
    for(int i=0;i<rows; i++){
        for(int j= 0; j<cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Q1. Sum of row wise
    int sarr[4][3]={
        {10,5,4},
        {12,5,45},
        {17,90,40},
        {5,4,1}
    };
    for(int i=0; i<4; i++){
        int sum=0;
        for(int j=0; j<3; j++){
            sum = sum+sarr[i][j];
            // printroWise(sarr,4,3);
        }
        cout << sum << endl;
    }

    // Q2. Linear Search in 2D array;
    int l_arr[4][3]={
        {10,5,4},
        {12,5,45},
        {17,90,40},
        {5,4,1}
    };

    int key = 90;
    cout << findkey(l_arr,4,3,key);

    // Q3. Find the maximum number from an 2D array
    int m_arr[3][3] = {
        {10, 24, 39},
        {12, 45, 20},
        {707, 90, 72}};

    int maxi = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (m_arr[i][j] > maxi)
            {
                maxi = m_arr[i][j];
            }
        }
    }
    cout << "The max number in an 2D array is : " <<maxi << endl;

    return 0;
}