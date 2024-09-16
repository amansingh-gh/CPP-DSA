#include<iostream>
using namespace std;

int inc(int n){
    n++;
    cout << n;
}

int main(){
    // int arr[5];
    // cout << "Enter your digits here: ";
    // for(int i=0; i<5; i++){
    //     cin >> arr[i];
    // }

    // // priniting doubles
    // for(int i=0; i<5; i++){
    //     cout << arr[i]*arr[i];
    // cout << endl;
    // }

    int a = 15;
    int ans = inc(a);
    cout << endl;
    cout << "ans"<<ans;

    return 0;
}