#include<iostream>
using namespace std;

int main(){
    int res[3][3];
    int arr[][3] = {
        {1, 2, 3},
        {40, 5, 6},
        {7, 8, 9}};

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                res[j][i] = arr[i][j];
            }
        }
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
               cout << res[i][j] << " ";
            }
            cout << endl;
        }
    return 0;
}