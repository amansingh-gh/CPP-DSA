#include<iostream>
using namespace std;
int main(){
    int n = 15;
    int k = 3;

    int mask = 1 << k;
    int ans = n | mask;
    cout << ans << endl;
    return 0;
}