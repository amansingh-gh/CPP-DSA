#include<iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    for(int i=2; i<sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int ans = isPrime(n);
    if(ans) cout << "Number is Prime";
    else cout << "Not Prime";

    return 0;
}