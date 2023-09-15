#include <iostream>
using namespace std;

void count(int n){
    if(n==0) return;   // Base condition
 
    cout << n << " ";   // Processing

    count(n-1);        //  Recursive call
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

     count(n);

    return 0;
}