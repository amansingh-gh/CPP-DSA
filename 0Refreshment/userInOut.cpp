#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr;
    int size = 5;
    for(int i=0; i<size-1; i++){
        cout << "Enter element: "<< i << " ";
        cin >> arr[i];
    }

    // Printing the values
    for(auto i : arr){
        cout << i << " ";
    }
    return 0;
}