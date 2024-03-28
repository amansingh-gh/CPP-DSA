#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a , int b){
    cout << "First number is: " << a <<" ";
    cout << "  Second number is : " << b << endl;
    return a < b;
}

int main()
{

    vector<int> v{5, 3, 4, 1, 2};
    // vector<string> str{"aman", "singh"};

    sort(v.begin(), v.end(), compare);
    for (auto i : v)
    {
        cout << i << " ";
    } 
    return 0;
}