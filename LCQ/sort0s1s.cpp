#include<iostream>
#include<vector>
using namespace std;

void sortAll(vector<int>&arr){
    int st = 0, i=0,end = arr.size()-1;
    while(i<end){
        if(arr[i]==0){
            swap(arr[i],arr[st]);
            i++; st++;
        }
        else{
            swap(arr[i],arr[end]);
            end--;
        }
        
    }
    
}

int main(){
    vector<int>arr{1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0};
    sortAll(arr);

    for(auto i: arr){
        cout << i << " ";
    }
    
    return 0;
}