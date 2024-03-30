#include <iostream>
using namespace std;

bool isPrime(int n)
{
    // int i=2;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    bool ans = isPrime(n);
    if (ans)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not a Prime";
    }

    return 0;
}