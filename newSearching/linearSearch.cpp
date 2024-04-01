#include<iostream>
#include<vector>
using namespace std;

bool linearSer(vector<int>arr, int key){
    int n = arr.size()-1;
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return true;
        }
          }
        return false;  
}

int main(){
    vector<int>arr{10,20,30,40,50,60};
    int key = 50;
    int ans = linearSer(arr,key);
    
    if(ans==1){
       cout << "Yes found";
    }
    else{
        cout << "Not found";
    }

    return 0;
}