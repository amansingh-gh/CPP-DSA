#include<iostream>
#include <vector>
using namespace std;

int dupli(vector<int>num){
    while(num[0]!=num[num[0]]){
        swap(num[0], num[num[0]]);
    }
    return num[0];
}



int main(){
    vector<int>arr{1,1,2,2,2,1,1,2};
    int ans = dupli(arr);
    cout << ans << endl;

    return 0;
}