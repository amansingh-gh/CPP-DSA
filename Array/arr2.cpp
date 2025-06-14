#include<iostream>
using namespace std;

int main(){
    // int arr[] = {10,20,30,40,50,60,70};
    // int size = sizeof(arr)/sizeof(arr[0]);

    // cout << "The length of arr is: " << size<< endl;
    
    // int i;
    // for(i=0; i<size; i++){
    //     cout << "IS: " << arr[i]<< endl;
    // }

// USER Input
    int brr[5];
    cout << "Enter the input value for array :  " << endl;

    int size = sizeof(brr)/sizeof(brr[0]);
    int i;
    for(i=0; i<size; i++){
        cin>>brr[i];
    }

    for(auto val: brr){
        cout << val<< endl;
    }

    return 0;
}