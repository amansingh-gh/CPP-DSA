#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<vector<int>> arr
    {   {1, 2, 3, 4},
        {5, 6, 7, 8},
        { 9, 10, 11, 12 }
    };

    int row = arr.size();
    int col = arr[0].size();

    for(int stCol = 0; stCol<col; stCol++){
        if((stCol & 1)==0){
            for(int i=0; i<row; i++){
                cout << arr[i][stCol] << " ";
            }
        }

        else{
            for(int i=row-1; i>=0; i--){
                cout << arr[i][stCol] << " ";
            }
        }
    }



        return 0;
}
