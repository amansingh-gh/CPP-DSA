#include <iostream>
using namespace std;

void passByValueCnge(int*& p){
    // Here chagne by value only
    // p = p + 1;

    // Here change by refrence
    *p = *p + 1;
}

int main(){
    int a = 5;
    int *p = &a;

    cout << "Before changing or updaing the value" << endl;

    cout << a << endl;
    cout << p << endl;
    cout << *p << endl;

    passByValueCnge(p);

    cout << a << endl;
    cout << p << endl;
    cout << *p << endl;

    return 0;
}