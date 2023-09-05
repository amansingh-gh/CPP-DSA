#include <iostream>
using namespace std;

void solveCmpx(int **ptr)
{
    **ptr = **ptr + 1;
}

int main()
{
    int a = 70;
    int *p = &a;
    int **q = &p;

    solveCmpx(q);

    cout << "The value of x is : " << a << endl;



    int x= 90;
    int &b = x;

    cout << x << endl;
    cout << b << endl;
     
     ++x;

    cout << x << endl;
    cout << b << endl;



    return 0;
}