#include<iostream>
using namespace std;

int main(){
    int a = 90;
    int *ptr1 = &a;
    int *dusraPtr = ptr1;

    cout << ptr1 << endl;
    cout << *ptr1 << endl;
    cout << dusraPtr << endl;
    cout << *dusraPtr;
    return 0;
}