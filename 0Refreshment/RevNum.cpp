#include<iostream>
using namespace std;
void revNum(int n){
    int reversedNum = 0;
    while(n>0){
        int remainder = n % 10;
        reversedNum = (reversedNum * 10) + remainder;
        n = n/10;
    }
    cout << "Reversed Number is: " << reversedNum;
}
int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    revNum(n);

    return 0;
}