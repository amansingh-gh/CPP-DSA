// Sum of Even number upto N.

#include<iostream>
using namespace std;

void evenSum(int n){
    int sum = 0;
    for(int i=2; i<=n; i=i+2){
        sum = sum + i;    
        cout << i << endl;
    }
    cout << "The sum value is: " << sum;
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    evenSum(n);

    return 0;
}