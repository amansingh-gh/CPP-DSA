#include<iostream>
#include<vector>
using namespace std;

void negToLeft(vector<int>&arr){
    int l = 0, m = 0, h = arr.size()-1;

    while(l<h){
        if(arr[l]<0){
            l++;
        }


        else if(arr[h]>0){
            h--;
        }
        else{
            swap(arr[l],arr[h]);
        }
    }
}

int main(){
    vector<int>arr{-1,-2,-3,0,-7,-8,1,7,9,-12};

    negToLeft(arr);
    
    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}