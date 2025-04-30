#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr{1, 3, 4, 4, 4, 4,4, 4, 6, 7};
    int target = 4;
    auto lower = lower_bound(arr.begin(), arr.end(), target);
    auto upper = upper_bound(arr.begin(), arr.end(), target);
    cout << "fist occurence is : "<< lower-arr.begin() << endl;
    cout << "last occurence is : "<< upper-arr.begin() << endl;


    return 0;
}