#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int main(){
    vector<int>arr1 ={1,2,3,4,5};
    vector<int>arr2 ={4,5,1};
    vector<int>ans;

    for(int i=0; i<arr1.size();i++){
        for(int j=0; j<arr2.size(); j++){
            if(arr1[i]==arr2[j]){
                arr2[j] = INT_MIN; 
                ans.push_back(arr1[i]);
            }
        }
    }
    cout << "Element are: ";
    for(auto i : ans){
        cout <<  i << " "; 
    }
    return 0;
}