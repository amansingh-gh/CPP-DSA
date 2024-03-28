#include <iostream>
using namespace std;

int main(){
    int row, col, n;
    cout << "Enter the limit of the sq: ";
    cin >> n;
    for(row=0; row<n; row++){
        for(col = 0; col<n; col++){
            cout << " * ";
        }
        cout << endl;
    }
}