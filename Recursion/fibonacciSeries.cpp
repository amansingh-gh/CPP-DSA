#include <iostream>
using namespace std;
int fibSeries(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fibSeries(n - 1) + fibSeries(n - 2);
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << fibSeries(n);
    
    return 0;
}