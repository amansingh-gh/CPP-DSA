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
}