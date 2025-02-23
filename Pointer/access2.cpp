#include <iostream>
using namespace std;

int main()
{
    int a = 500;
    // Pointer creation
    int *ptr = &a;
    // Access
    cout << *ptr << endl; // value
    cout << ptr << endl;  // address
    cout << &ptr << endl; // gives ptr address
    cout << sizeof(ptr);

    // Bad Practice
    // int *atr;

    // NULL Pointer
    int *atr = nullptr;

    // copying the address
    int x = 50;
    int *pptr = &x;
    int *newPtr = pptr;

    cout << *newPtr << endl;  //same value
    cout << *pptr << endl;    //same value  
    cout << newPtr << endl;
    cout << pptr << endl;
}