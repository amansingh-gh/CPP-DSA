#include<iostream>
using namespace std;

void revCounting(int n){
    if(n==0) return;
    cout << n << " ";
    revCounting(n-1);
}

int fact(int n){
    if(n==0 || n==1) return 1;
    return n * fact(n-1); 
}

int fibonacci(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}


int main(){
    int n = 5;
    revCounting(n);

    int ans = fact(n);
    cout  << "\nFactorail of "<< n << " is : " << ans << endl;

    int res = fibonacci(7);
    cout << res << " ";

    return 0;
}