//  Find square root with floating number

#include <iostream>
using namespace std;

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

    int x;
    cout << "Enter the square number: ";
    cin >> x;

    int result = sqrtNum(x);
    // cout << "The square root of " << x << " is " << result << endl;

    int precision;
    cout << "Enter the number of floating number: ";
    cin >> precision;

    double step = 0.1;
    double finalAns= result;
    for(int i=0; i<precision; i++){
        for(double j=finalAns; j*j<=x; j=j+step){
            finalAns = j;
        }
        step = step/10;
    }
    cout << "Final ans is : " << finalAns << endl;
    return 0;
}
