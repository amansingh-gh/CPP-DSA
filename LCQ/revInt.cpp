#include<iostream>
using namespace std;

void revInt(int n){
    int ans = 0, rem = 0;
    bool isNeg = false;
    if(n<0){
        isNeg = true;
        n = -n;
    }
    while(n>0){
        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n / 10;
    }
    isNeg ? cout << -ans : cout << ans;

}

int main(){
    int n;
    cout << "Enter integer: ";
    cin >> n;
    revInt(n);
    return 0;
}