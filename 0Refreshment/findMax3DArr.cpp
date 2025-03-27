#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[][3] = {
        {1, 2, 3},
        {40, 5, 6},
        {7, 8, 9}};

    int max = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > max)
            {
               
                max = arr[i][j];
            }
        }
    }

    cout << "Max element is: " << max << endl;
    return 0;
}