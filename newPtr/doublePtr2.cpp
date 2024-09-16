#include<iostream>
using namespace std;

void solve(int &x){
    cout << x << endl;
    x++;
    cout << x << endl;
}

int main(){
    int a = 5;
    int &b = a;
    cout << a << endl;
    cout << b << endl;

    a++;
    cout << "After incrementing a + 1 : " << endl;
    cout << a << endl;
    cout << b << endl;

    b++;
    cout << "After incrementing a + 2: " << endl;
    cout << a << endl;
    cout << b << endl;


    // Reference variable
    int x = 90;
    solve(x);
    cout  << "Inner x is : " << x << endl;

    return 0;
}