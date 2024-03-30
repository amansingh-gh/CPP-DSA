#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr{10, 20, 30, 40, 40, 40, 40, 50};
    int target = 40;
    auto up = lower_bound(arr.begin(), arr.end(), target);
    cout << up-arr.begin() << endl;

    auto top = upper_bound(arr.begin(), arr.end(), target);
    cout << top-arr.begin() << endl;
} 