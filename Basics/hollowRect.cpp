#include <iostream>
using namespace std;

int main(){
    int row, col, i;
    for(row=0; row<6; row++){
        if(row==0 || col==5){
            for(col=0; col<5; col++){
                cout << " * ";
            }
        }
        else{
            cout << " * ";
            // spaces
            for(int i=0; i<5; i++){
                cout << "  ";
            }
            cout << " * ";
        }
        cout << endl;
    }
}