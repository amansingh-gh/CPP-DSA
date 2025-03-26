#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cout << "Enter "<< i << "value: \n";
        arr.push_back(i);
    }
 
    cout << "The values are: ";
    for(auto i : arr){
        cout << i << " ";
    }
    return 0;
}