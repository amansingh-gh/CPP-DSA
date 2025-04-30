#include<iostream>
#include<vector>
using namespace std;

int nearlySorted(vector<int>arr){
    int st=0, end = arr.size(), mid = st+(end-st)/2, target=40;
    while(st<=end){
        if(arr[mid]==target){
            return mid;
        }

        if(mid+1 < end && arr[mid+1] == target){
            return mid;
        }
        if(mid-1 >= st && arr[mid-1]==target){
            return mid;
        }

        if(target>arr[mid]){
            st = mid + 2;
        }
        else{
            end = mid - 2;
        }
         mid = st+(end-st)/2;
    }
    return -1;
}

int main(){
    vector<int>arr{10,3,40,20,50,80,70};
    int res = nearlySorted(arr);
    cout << res;
    return 0;
}
