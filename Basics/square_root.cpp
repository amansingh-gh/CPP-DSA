#include <iostream>
using namespace std;

int findSquare(int n)
{
    int target = n;
    int s = 0;
    int e = n;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid * mid == target)
        {
            return mid;
        }
        else if (mid * mid > target)
        {
            // left search
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
            ans = mid; 
        }
        mid = s + (e - s) / 2;
    }
}

int sqrtNum(int a)
{
    int target = a;
    int start = 0;
    int end = a;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (mid * mid > target)
        {
            end = mid - 1;
        }
        else if (mid * mid < target)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            return mid;
        }
        mid = start + (end - start) / 2;
    }
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int res = findSquare(n);
    cout << res << endl;

    int x;
    cout << "Enter the square number: ";
    cin >> x;

    int result = sqrtNum(x);
    cout << "The square root of " << x << " is " << result << endl;
    return 0;
}
