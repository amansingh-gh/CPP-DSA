#include <iostream>
#include <vector>
using namespace std;

void iterateRec(vector<int>arr, int n ,int i){
    if(i>=n) return;
    cout << arr[i] << " ";
    iterateRec(arr, n, ++i);
}

int main(){
    vector<int>arr{10,20,30,40,50,60,70,80,90,100};
    int i = 0;
    int n = arr.size();
    iterateRec(arr,n, i);
    return 0;
} 