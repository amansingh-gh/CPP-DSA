#include <iostream>
#include <vector>
using namespace std;

bool checkSorted(vector<int>&arr, int i, int &n){
    if(i==n-1){
        return true;
    }
    if(arr[i+1]<arr[i]){
        return false;
    }

    return checkSorted(arr,i+1, n);

}

int main(){
    vector<int>arr{2,6,7,9,12,11};
    int i = 0;
    int n = arr.size();

    bool isSorted = checkSorted(arr,i,n);
    if(isSorted){
        cout << "Array is sorted";
    }
    else {
        cout << "Array is not sorted";
    }

    return 0;
}