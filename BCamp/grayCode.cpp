#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int res = n ^ (n >> 1);
    cout << res;
    return 0;
}