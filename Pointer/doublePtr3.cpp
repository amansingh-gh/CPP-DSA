#include<iostream>
using namespace std;

void util(int *p){
    p = p+1;  // it changes in the copy of p in another location
    // *p = *p+1;  // it changes in the reference pointer location
}

int main(){
    int a = 5;
    int *p = &a;
    int **q = &p;

    // cout << p << endl;
    // cout << &p << endl;
    // cout << **q << endl;
    // cout << *q << endl;

    cout << "Before changes: " << endl;
    cout << a << endl;
    cout << &p << endl;
    cout << *p << endl;

    util(p);
    cout << "After changes: " << endl;
    cout << a << endl;
    cout << &p << endl;
    cout << *p << endl;

    return 0;
}