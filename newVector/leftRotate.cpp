#include <iostream>
#include <vector>
using namespace std;

void leftRotate(vector<int> &arr, int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;

    vector<int> arr(n);


    for (int i = 0; i < n; i++)
    {
        cout << "Enter" << i << " th index value : ";
        cin >> arr[i];
    }

    leftRotate(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;



    return 0;
}