#include<iostream>
using namespace std;
void revNum(int num){
    int ans = 0, rem = 0;
    while(num>0){
        int digit = num % 10;
        ans = ans * 10 + digit;
        num /= 10;
    }
    cout << "Revserd number is: "<< ans;
}
int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    revNum(num);
    return 0;
}