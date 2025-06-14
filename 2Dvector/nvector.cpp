<<<<<<< HEAD
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
=======
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
>>>>>>> 7c769e20af7d65031828b4f3f8d8db8d8c0b064e
}