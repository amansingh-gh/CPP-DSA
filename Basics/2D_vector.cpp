#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int> > arr; // This we we initalize 2d vector
    vector<int> a{1,2,3};   
    vector <int> b{4,5,6};
    vector <int> c{7,8,9};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);


    for(int i=0; i<arr.size();i++){
        for(int j=0; j<arr[i].size(); j++){
            cout <<    arr[i][j] << " ";
        }
        cout << endl;
    }

    // Other Method
    int rows=4;
    int cols= 3;

    vector<vector<int> > brr(rows, vector<int>(cols,-1));
    for(int i=0; i<brr.size(); i++){
        for(int j=0; j<brr[i].size(); j++){
            cout  << brr[i][j] << " " ;
        }
        cout << endl;
    }


    // Otehr method again
    int row=5;
    int col = 3;

    vector<vector<int>> crr(row, vector<int>(col,0));
    for(int i=0; i<crr.size(); i++){
        for(int j=0; j<crr[i].size(); j++){
            cout << crr[i][j] << " "; 
        }
        cout << endl;
    }



    // Q. Initialize 2D array with -8;
    int roww = 5;
    int coll = 4;
    vector<vector<int>> drr(roww, vector<int>(coll,-8));
    for(int i=0; i<drr.size(); i++){
        for(int j=0; j<drr[i].size(); j++){
            cout << drr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}