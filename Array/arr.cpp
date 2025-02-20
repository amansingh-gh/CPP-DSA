// Array Creation
#include<iostream>

using namespace std;

int main(){
int arr[] = {10,20,30,40};
        for( auto val: arr){
            cout << val << endl; 
            
        }
        cout << "Success" << endl;
int arr2[7] = {500,600,700};
// int arr3[10] = {0};

for(auto val2: arr2){
    cout << &arr2 << endl;
}

cout <<"The size of arr in byte is : " <<sizeof(arr);

}
