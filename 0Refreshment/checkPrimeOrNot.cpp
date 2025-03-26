#include<iostream>
#include <math.h>
using namespace std;
bool findPrime(int n){
    // for(int i=2; i<n; i++){
    for(int i=2; i<sqrt(n); i++){
        if(n%2==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    bool isPrime = findPrime(n);
    if(isPrime){
        cout << "Prime";
    }
    else{
        cout << "Not Prime";
    }
    return 0;
}