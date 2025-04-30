#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &arr)
{
    int st=0, i = 0;
    int end = arr.size() - 1;
    while (st <= end)
    {
        if (arr[i] == 0)
        {
            swap(arr[st], arr[i]);
            i++;
            st++;
        }
        else{
            swap(arr[end] , arr[i]);
                end--;
    }
}
}
int main()
{
    vector<int> arr = {0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1};
    sort(arr);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}