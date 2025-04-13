#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return true;
        }
    }
        return false;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout << "Enter the key: ";
    cin >> key;

    bool ans = linearSearch(arr,size,key);

    
    if(ans == true){
        cout << "Found";
    }
    else{
        cout << "Not Found";
    }

    return 0;
}