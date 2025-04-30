#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int>arr3;

    int a;
    cout << "Enter the size of a: ";
    cin >> a;
    vector<int>arr1(a);
    for(int i=0; i<arr1.size(); i++){
        cout << "Enter the "<< i << " th index : ";
        cin >> arr1[i];
    }

    
    int b;
    cout << "Enter the size of b: ";
    cin >> b;
    vector<int>arr2(b);
    for(int i=0; i<arr2.size(); i++){
        cout << "Enter the "<< i << " th index :  ";
        cin >> arr2[i];
    }

    // Concatenationg arr1 and arr2 into arr3;

    for(int i=0; i<arr1.size(); i++){
        arr3.push_back(arr1[i]);
    }

    for(int i=0; i<arr2.size(); i++){
        arr3.push_back(arr2[i]);
    }

    // Printing The concatined values 


    cout << "The concatined vector arrray is: " ;
    for(int i=0; i<arr3.size(); i++){
        cout << arr3[i] << " ";
    }

    return 0;
}