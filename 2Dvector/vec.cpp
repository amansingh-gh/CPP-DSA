#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int>arr(n,-12);

    arr.push_back(5);
    arr.push_back(2);
    // arr.pop_back();

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << arr.capacity();

    return 0;
}