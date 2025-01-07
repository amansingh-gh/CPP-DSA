#include<iostream>
using namespace std;
void revPrint(int n){
    if(n==0) return;
    cout << n << " ";
    revPrint(n-1);
}
int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;
    revPrint(n);
    return 0;
}