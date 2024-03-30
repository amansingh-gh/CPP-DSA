#include <iostream>
using namespace std;

void func()
{
    int x;
    cout << "Enter the range : ";
    cin >> x;
    for (int i = 0; i <= x; i++)
    {
        cout << i << endl;
    }
}



// Function of Counting the number
counting_num(int x)
{
    for (int i = 0; i <= x; i++)
    {
        cout << i << " "<<endl;
    }
}



//  Function of Add 2 numbers;
int addfunction(int a, int b)
{
    int sum = a + b;
    return sum;
}



// Function of Find the max nunber from 3 numbers;
int maxfun(int x, int y, int z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if (y > x && y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
}



// Function for sum of all numbers till n;
int getsum(int x)
{
    int sum = 0;
    for (int i = 0; i <= x; i++)
    {
        sum += i;
    }
    return sum;
}



// function for sum of all even number till n;
int getevensum(int q)
{
    int sum = 0;
    for (int i = 2; i <= q; i += 2)
    {
        sum = sum + i;
    }
    return sum;
}

//  Main section
int main()
{

    // Sum of all number till n;
    int sum_num;
    cout << "Enter the range of number : ";
    cin >> sum_num;

    int res = getsum(sum_num);
    cout << "The sum is : " << res <<endl;



    // sum of all even number till n;
    int val = 0;
    cout << "Enter the range of printing even number: ";
    cin >> val;

    int e_res = getevensum(val);
    cout << "The sum of all even number is : " << e_res <<endl;



    // Adding the 2 numbers
    int num1;
    cout << "Enter 1st number: ";
    cin >> num1;

    int num2;
    cout << "Enter 2nd number: ";
    cin >> num2;
    int add = addfunction(num1, num2);
    cout << "The sum is : " << add << endl;



    // Find the max nunber from 3 numbers;
    int p;
    cout << "Enter 1st number: ";
    cin >> p;

    int q;
    cout << "Enter 2nd number: ";
    cin >> q;

    int r;
    cout << "Enter 2nd number: ";
    cin >> r;

    int result = maxfun(p, q, r);
    cout << "The max number is : " << result << endl;



    // Counting the number
    int count;
    cout << "Enter the range for counting the number : ";
    cin >> count;

    counting_num(count);
}