#include<iostream>
#include<vector>
using namespace std;

void segregateElements(vector<int> &arr) {
        int low = 0, high = arr.size()-1;
        while(low<high){
            if(arr[low]>0){
                low++;
            }
            else if(arr[high]<0){
                high--;
            }
            else{
                swap(arr[low],arr[high]);
            }
        }
    }

int main(){
    vector<int>arr{-5, 7, -3, -4, 9, 10, -1, 11};
    segregateElements(arr);

    for(auto i: arr){
        cout << i << " ";
    }
    return 0;
}