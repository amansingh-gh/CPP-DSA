#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] ={1,2,3,4,5,6,7,8,9,10,11,12,13};
    int size = sizeof(arr)/sizeof(arr[0]);
    if(binary_search(arr, arr+size, 9)){
        cout << "Found\n";
    }
    else cout << "Not found";
    return 0;
}