#include<iostream>
using namespace std;

int decimal2BinaryConversion(int n){
    return n%2;
}

int main(){
    // Decimal to Binary conversion
    int n;
    cout << "Enter the Decimal Value: ";
    cin >> n;

    cout << decimal2BinaryConversion(n);

    return 0;
}