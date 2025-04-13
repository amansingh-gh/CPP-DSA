#include <iostream>
using namespace std;

int main(){
    int row, col, i;
    for(row=0; row<10; row++){
        for(col=0; col<10-row; col++){
            cout << " * ";
        }
        cout << endl;
    }
}