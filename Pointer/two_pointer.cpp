#include <iostream>
using namespace std;

int main(){
    int a = 50;
    int *p = &a;
    int **q = &p;

// 50, 50 ,add of p,    ;;   50,  add of p 

    cout << a << endl;    
    cout << *p << endl; 
    cout << &a << endl; 


    cout << **q << endl; 
    cout << *q << endl; 

    return 0;
}