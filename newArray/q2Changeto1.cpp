#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = sizeof(arr)/sizeof(arr[0]);

    int i;
    for(i=0; i<size; i++){
        arr[i]=1;
    }

    cout << "The set value is : ";
    for(auto val : arr){
        cout << val<< endl;
    }

    return 0;
}