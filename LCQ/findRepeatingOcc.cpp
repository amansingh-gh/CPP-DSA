#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

int findReapting(vector<int> &arr){
    int n = arr.size();

    // Incrementing each value by 1;
    unordered_map<int,int>hash;
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    // check which value is more then 1;
    for(int i=0; i<n; i++){
        if(hash[arr[i]] > 1){
            return i+1;
        }
    }
    return -1;
}

int main(){
    vector<int>arr{1,5,3,5,4,2,6};
    int res = findReapting(arr);
    cout << "The first occurence of repeating index is: "<< res << endl;
    return 0;
}