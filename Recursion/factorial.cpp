#include <iostream>
using namespace std;

int factorial(int n){
    if(n==1) return 1;

    int smallPrblm = factorial(n-1);
    int bigPrblm = n * smallPrblm;

    // return bigPrblm;
}


int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int ans = factorial(n);

    cout << ans;

    return 0;
}