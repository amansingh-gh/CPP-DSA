#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySer(vector<int>ar, int key){
    int st = 0;
    int end = ar.size()-1;
    int mid = st+(end-st)/2;

    while(st<=end){
        if(key==ar[mid]){
            return mid;
        }
        else if(key<ar[mid]){
            end = mid-1;
        }
        else{
            st = mid+1;
        }

         mid = st+(end-st)/2;
    }
    return -1;
}

int main(){
    
    vector<int>arr{10,20,30,40,50,60};

    // predefine STL 
    if(binary_search(arr.begin(), arr.end(),40)){
        cout << "FOUND";
    }
    else{cout << "Not Found";}


    // int key = 50;
    // int ans = binarySer(arr,key);
    // cout << ans << endl;
}