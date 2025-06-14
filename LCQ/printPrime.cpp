#include<iostream>
#include <cmath>
using namespace std;

void isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i == 0){
            cout << i << " ";
        }
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    isPrime(n);
    return 0;
}