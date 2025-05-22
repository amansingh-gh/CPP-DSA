#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr(5,1);
    for(auto i : arr){
        cout << i << " " ;
    }
    cout << endl;

    vector<int> brr{10,20,30};
    brr.front();
    brr.back();

    brr.capacity();
    brr.push_back(20);

    for(auto i : brr){
        cout << i << " ";
    }
    return 0;
}