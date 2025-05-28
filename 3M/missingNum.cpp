#include<iostream>
using namespace std;

int missingNum(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum = sum + arr[i];        
    }
        int actualSum = (size*(size+1))/2;
        int missingNo = actualSum - sum;
        return missingNo;
}

int main(){
    int arr[] = {9,6,4,2,3,5,7,0,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int res = missingNum(arr,size);
    cout <<  res << endl;
    return 0;
}