<<<<<<< HEAD
#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int n;
    // cout << "Enter the size of vector:: ";
    // cin >> n;
    // vector<int>arr(n);

    // for(int i=1; i<=arr.size(); i++){
    //     // arr.push_back(i*2);
    //     arr[i] = i*2;
    // }
    // cout << "Prinitng using traditional for loop" << endl;
    // for(auto val: arr){
    //     cout << val << " " ; 
    // }
    // // Pop out the last elemet of an array
    // arr.pop_back();

    // // for(auto val: arr){
    //     // cout << "The value is: "<<val<<endl;
    // // }
    // cout << endl <<"Printing using normal for loop"<< endl;
    // for(int i=0; i<arr.size(); i++){
    //     cout << arr[i] << " ";
    // }


    int x;
    cout << "Enter yur value of x: ";
    cin >> x;

    vector<int>cr(x,-1);
    cout << "Size of b: " << cr.size() << endl;
    cout << "Capacity of by: "<<cr.size() << endl;

    for(auto val: cr){
        cout << val << " ";
    }

    return 0;
=======
#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int n;
    // cout << "Enter the size of vector:: ";
    // cin >> n;
    // vector<int>arr(n);

    // for(int i=1; i<=arr.size(); i++){
    //     // arr.push_back(i*2);
    //     arr[i] = i*2;
    // }
    // cout << "Prinitng using traditional for loop" << endl;
    // for(auto val: arr){
    //     cout << val << " " ; 
    // }
    // // Pop out the last elemet of an array
    // arr.pop_back();

    // // for(auto val: arr){
    //     // cout << "The value is: "<<val<<endl;
    // // }
    // cout << endl <<"Printing using normal for loop"<< endl;
    // for(int i=0; i<arr.size(); i++){
    //     cout << arr[i] << " ";
    // }


    int x;
    cout << "Enter yur value of x: ";
    cin >> x;

    vector<int>cr(x,-1);
    cout << "Size of b: " << cr.size() << endl;
    cout << "Capacity of by: "<<cr.size() << endl;

    for(auto val: cr){
        cout << val << " ";
    }

    return 0;
>>>>>>> 7c769e20af7d65031828b4f3f8d8db8d8c0b064e
}