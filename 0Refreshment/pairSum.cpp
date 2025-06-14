#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr = {1,2,3,4,5,6,7,8,9,10,11};
    int sum = 11;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i]+arr[j]==sum){
                cout << "Pair is : "<< arr[i]<< "," << arr[j] << endl;
            }
        }
    }
    return 0;
}   