#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{0,1,1,0,1,0,1,1,0,1};
    int start = 0;
    int end = arr.size();

    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i]==1){
                swap(arr[i],arr[j]);
            }
        }
    }

    for(auto val: arr){
        cout << val << " ";
    }

    return 0;
}