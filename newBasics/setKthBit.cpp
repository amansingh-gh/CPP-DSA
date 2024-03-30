#include<iostream>
using namespace std;

void setKthBit(int n, int k){
    int mask = 1 << k;
    int ans = n | mask;
    cout << "The Kth Bit is : " << ans<< endl;
}


int main(){
    int n, k;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of k: ";
    cin >> k;
    setKthBit(n,k);

    return 0;
}