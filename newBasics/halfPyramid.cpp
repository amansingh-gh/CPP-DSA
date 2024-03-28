#include <iostream>
using namespace std;
int main(){
int n, row, col;
cout << "Enter the number of row count : ";
cin >> n;

for(row=0; row<n; row++){
    for(col=0; col<row+1; col++){
        cout << "* ";
    }
    cout << endl;
}
}