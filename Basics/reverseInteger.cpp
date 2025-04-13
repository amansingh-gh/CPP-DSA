#include<iostream>
#include<limits.h>
using namespace std;

int revInt(int n){
    int ans = 0, rem = 0;
    bool isNegative = false;
    if(n<=INT_MIN){
        return 0;
    }
    if(n<0){
        isNegative = true;
        n = -n;
    }
    while(n>0){
        if(ans > INT_MAX/10){
            return 0;
        }
        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n / 10;
    }
    return isNegative ? -ans : ans;
}


int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int ans = revInt(n);
    cout << "The reversed Integer is :: "<< ans << endl;

    return 0;
}