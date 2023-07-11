#include <iostream>
#include <limits.h>
int main()
{
    using namespace std;
    // In an array function, they used call by refrence concept. here user plays with original elment.

    // More Concepts;
    // Q. Return the count numbers of 0 and 1 in an array;
    int count_arr[] = {0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1};
    int sizec = 20;

    int countZero = 0;
    int countOne = 0;

    for (int i = 0; i < sizec; i++)
    {
        if (count_arr[i] == 0)
        {
            countZero++;
        }
        if (count_arr[i] == 1)
        {
            countOne++;
        }
    }

    cout << "The cout of zero is : " << countZero << endl;
    cout << "The cout of zero is : " << countOne << endl;


    // Q.Find the max number from an array;  (when finding the max number then we initialize with INT_MIN and for finding min then initialize with INT_MAX)
    int m_arr[] = {10, 20, 30, 40, 70, 12, 166, 45, 90, 11};
    int size_m = 10;

    int max_num = INT_MIN;
    for (int i = 0; i < size_m; i++)
    {
        if (m_arr[i] > max_num)
        {
            max_num = m_arr[i];
        }
    }

    cout << "Max number is : " << max_num << endl;



    // Q. Reverse an array
    int r_arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(r_arr[start], r_arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << r_arr[i] << " ";
    }

    return 0;
}