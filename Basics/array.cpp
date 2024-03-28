// Array is a type of data structure where we can store similar kind of item.

#include <iostream>
using namespace std;

pass_v(int a)
{
    a++;
    cout << "The copy passed value is: " << a << endl;
}

int main()
{

    // Initializing an array
    int arr[10];
    cout << arr << endl; // it returns base address

    //  Initializing and declaring an array
    int brr[] = {1, 2, 3, 4, 5, 6, 10};           // Using Static arry is good practice
    cout << "The items are : " << brr[0] << endl; // arr[0] -> (base address + 0 * 4)
    for (int i = 0; i < 6; i++)
    {
        cout << i << "  ";
    }

    // User input array;
    int arr[10];
    cout << "Enter the input value in an array: " << endl;

    // Taking user input;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    // Printing the value of an array
    cout << "Your given array input are : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    // Q1 take 5elements in an array and print their double
    int crr[5];
    cout << "Enter the 5 elements : ";

    for (int i = 0; i < 5; i++)
    {
        cin >> crr[i];
    }

    cout << "Your doubled input is : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << crr[i] * 2 << " ";
    }

    // return 0;

    // In 'pass by value' we can talk about copy of an element not an original element, i.e->
    int v = 10;
    pass_v(v);
    cout << "The value of v is : " << v << endl;

    // In an array function, they used call by refrence concept. here user plays with original elment.
}