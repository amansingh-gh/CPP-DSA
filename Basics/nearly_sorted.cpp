//  Nearly sorted Array
#include <iostream>
#include <vector>
using namespace std;

int nearlySorted(vector<int>arr , int target){
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;

    while(s<=e){
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid-1]==target){
        return mid-1;
    }
    if(arr[mid+1] == target){
        return mid+1;
    }

    else if(target>arr[mid]){
        // right search
        s = mid+1;
    }
    else{
        e = mid-1;
    }
    mid =s+(e-s)/2;
}
return -1;
}

int main()
{
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target  = 3;
    int res = nearlySorted(arr,target);
    cout << "The index is " << res << endl;
}