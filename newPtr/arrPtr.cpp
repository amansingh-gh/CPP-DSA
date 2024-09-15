#include<iostream>
using namespace std;

int main(){
   int arr[] ={10,20,30,40,50};
   cout << arr << endl; 
   cout << arr[0] << endl; 
   cout << &arr[1] << endl; 
   cout << "The address of 2nd index is: " << &arr[2] << endl; 
   cout << &arr << endl; 


   cout << "The addresses are: " <<endl;
   for(auto i : arr){
    cout << &arr[i] << endl;
   }


    int arr2[] = {10,20,30,40,50};
    cout << arr2 << endl;
    cout << &arr2 << endl;
    cout << arr2[0] << endl;
    cout << *arr2 << endl;

    int *p = arr2;
    cout << &p << endl;
    cout << p << endl;
    cout << *p+1 << endl;
    return 0;
}