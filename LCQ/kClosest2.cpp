#include<iostream>
#include <vector>
#include<cmath>
#include<algorithm>
using namespace std;

vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    vector<int>diff;
    vector<int>ans;
    int i=0;
    for(; i<arr.size(); i++){
        diff.push_back(abs(x-arr[i]));    
    }

    sort(diff.begin(), diff.end());

    while(i<k){
        ans.push_back(diff[i]);
    }
    return ans;
}

int main(){
    vector<int>arr{12,16,22,30,35,39,42,45,48,50,53,55,56};
    int k = 4;
    int x = 35;
    vector<int>res = findClosestElements(arr,k,x);
    for(auto i: res){
        cout << i << " ";
    }
    return 0;
}