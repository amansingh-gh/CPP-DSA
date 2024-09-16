#include<iostream>
using namespace std;

int main(){
    // int arr[3]={1,2,3};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // for(int i=0; i<size; i++){
    //     cout <<arr[i];
    // }
    // cout << endl;

    // Inputing the values form the user
    int brr[5];
    for(int i=0; i<5; i++){
        cout << "Input your "<<i<<"th "<<"number: ";
        cin >> brr[i];
    }

    for(int i=0; i<5; i++){
        cout <<"Data is "<< brr[i] << endl;
    }

    return 0;
}