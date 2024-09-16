<<<<<<< HEAD
#include<iostream>
using namespace std;
void countZerosOnes(int arr[], int size){
    int zeros = 0;
    int ones = 0;
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            zeros++;
        }
        else if(arr[i]==1){
            ones++;
        }
        else{
            cout << "Not found zeros and ones";
        }
    }
    cout << "Number of zeros are: " << zeros << endl;
    cout << "Number of ones are: " << ones << endl;

}

int main(){
    int arr[] = {0,0,0,0,1,0,1,1,1,0,0,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    countZerosOnes(arr,size);
    return 0;
=======
#include<iostream>
using namespace std;
void countZerosOnes(int arr[], int size){
    int zeros = 0;
    int ones = 0;
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            zeros++;
        }
        else if(arr[i]==1){
            ones++;
        }
        else{
            cout << "Not found zeros and ones";
        }
    }
    cout << "Number of zeros are: " << zeros << endl;
    cout << "Number of ones are: " << ones << endl;

}

int main(){
    int arr[] = {0,0,0,0,1,0,1,1,1,0,0,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    countZerosOnes(arr,size);
    return 0;
>>>>>>> 7c769e20af7d65031828b4f3f8d8db8d8c0b064e
}