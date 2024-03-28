// This is the STL method to find target using binary search;

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr{10,20,30,40,50};
    if(binary_search(arr.begin(),arr.end(),30)){
        cout << "Found" << endl;
    }
    else{
        cout << "Not found";
    }


    // stl method in array
    int a[] = {5,7,9,45,99,101};
    int size = 6;
    if(binary_search(a, a+size, 99)){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    return 0;
}


