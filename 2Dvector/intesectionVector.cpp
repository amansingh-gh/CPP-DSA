#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr{1,2,3,4,4,4,5,6};
    vector<int>brr{2,4,4};
    vector<int>ans;

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<brr.size(); j++){
        if(arr[i]==brr[j]){
            brr[j] = -1;
            // break;
            ans.push_back(arr[i]);
        }
        }
    }

    cout << "Intersection array is : ";
    for(auto val: ans){
        cout << val << "  ";
    }

    return 0;
}