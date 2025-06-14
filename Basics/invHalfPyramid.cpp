#include <iostream>
using namespace std;
int main(){
    int row, col, n;
    for(row=0; row<5; row++){
        for(col=0; col<5-row; col++){
            cout << col+1;
        }
        cout << endl;
    }
}