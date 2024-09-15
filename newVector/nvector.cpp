#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr{10,11};
    // for(int i=0; i<arr.size(); i++){
    //     cout << arr[i];
    // }
    cout << (sizeof(arr)/sizeof(int));
    cout << endl;
    cout << arr.capacity();
    return 0;
}