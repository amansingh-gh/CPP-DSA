#include<iostream>
#include<vector>
using namespace std;
int peakElement(vector<int>arr){
    int st = 0, end = arr.size()-1, mid = st + (end-st)/2;
    while(st<end){
        if(arr[mid]<arr[mid+1]){
            st = mid+ 1;
        }
        else{
            end = mid;
        }
        mid = st + (end-st)/2;
    }
    return mid;
}
int main(){
    vector<int>arr{0,10,5,2};
    int ans = peakElement(arr);
    cout << "Peak element at index : "<< ans << endl;
    return 0;
}