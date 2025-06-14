#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// // 1st method
// int findDuplicate(vector<int>&arr){
//     sort(arr.begin(), arr.end());

//     for(int i=0; i<arr.size()-1; i++){
//         if(arr[i]==arr[i+1]){
//             return arr[i];
//         }
//     }
//     return -1;
// }


// 2nd method
// iterate  on each element and mark visited (put (-) ).

// 3rd method
int findDuplicate(vector<int>&arr){
    while(arr[0] != arr[arr[0]]){
        swap(arr[0], arr[arr[0]]);
    }
    return arr[0];
}

int main(){
    vector<int>arr{1,3,2,4,3};
    int res = findDuplicate(arr);
    cout << "Duplicate element is: " << res << endl;
    
    return 0;
}