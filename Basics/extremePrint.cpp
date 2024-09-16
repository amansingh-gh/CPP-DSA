<<<<<<< HEAD
#include <iostream>
using namespace std;

void exPrint(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start<=end)
    {
        if (start == end)
        {
            cout << arr[start] << " ";
        }
        else
        {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {90, 70, 80, 80};
    int size = sizeof(arr) / sizeof(arr[0]);
    exPrint(arr, size);
    return 0;
=======
#include <iostream>
using namespace std;

void exPrint(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start<=end)
    {
        if (start == end)
        {
            cout << arr[start] << " ";
        }
        else
        {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {90, 70, 80, 80};
    int size = sizeof(arr) / sizeof(arr[0]);
    exPrint(arr, size);
    return 0;
>>>>>>> 7c769e20af7d65031828b4f3f8d8db8d8c0b064e
}