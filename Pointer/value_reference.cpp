#include <iostream>
using namespace std;
void solvee(int val){
    val++;
}

void solve(int& val){
    val++;
}


int main(){
    int a = 5;
    int b = 10;
    solvee(a);
    solve(b);
    cout << "The pass by value res is "<< a << endl;
    cout << "The pass by reference res is " << b << endl;
    return 0;
}