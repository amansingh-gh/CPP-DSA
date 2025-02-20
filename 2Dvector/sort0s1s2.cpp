#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{0,1,0,0,1,1,0,1,0,1};
    int start = 0;
    int end = arr.size()-1;

    while(start<=end){
        if(arr[start]==0){
            start++;
        }
        if(arr[start]==1){
            if(arr[end]==1){
                end--;
            }
            else{
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
        }
    }
    cout << "Sorted o's and 1's are : ";
    // for(auto val : arr){
    //     cout << val << " ";
    // }
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }

    return 0;
}