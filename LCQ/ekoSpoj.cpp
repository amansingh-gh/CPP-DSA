#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool isPossible(vector<long long int>trees, long long m, long long mid){
    long long woodCollect = 0;
    for(long long int i=0; i<trees.size(); i++){
        if(trees[i] > mid){
            woodCollect += trees[i]-mid;
        }
    }
    return woodCollect >=mid;
}

long long sawBladeHeight(vector<long long int>trees, long long m){
    long long st = 0;
    long long end;
    long long ans = -1;
    end = *max_element(trees.begin(), trees.end());

    while(st<=end){
        long long mid = st+(end-st)/2;
        if(isPossible(trees, m, mid)){
            ans = mid;
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}

int main(){
    long long int n, m;
    cin >> n >> m;
    vector<long long int>trees;
    while(n--){
        long long int height;
        cin >> height;
        trees.push_back(height);
    }

    cout << sawBladeHeight(trees, m);
    return 0;
}