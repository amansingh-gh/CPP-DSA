#include<iostream>
using namespace std;

int main(){
    int a = 80;
    int *ptr = &a;

    cout << a + 1 << endl;
    cout << ptr  << endl;
    cout << ptr + 1 << endl;
    cout << *ptr + 1 << endl;
    return 0;
}