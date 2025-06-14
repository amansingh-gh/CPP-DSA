#include<iostream>
using namespace std;

void rotateNinety(int arr[][3], int colSize){
    for(int i=0; i<3; i++){
        for(int j=i+1; j<3; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}

int main(){
    int arr[][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int colSize = 3;

    cout << "Before Rotating " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    rotateNinety(arr,colSize);

    cout << "After rotating "<< endl;
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}