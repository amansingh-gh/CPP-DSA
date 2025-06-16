#include<iostream>
using namespace std;

void findMissing(int *arr, int size){
    //1st method -- visiting method
    // for(int i=0; i<size; i++){
    //     int idx = abs(arr[i]);
    //     if(arr[idx-1] > 0){
    //         arr[idx-1] *= -1;
    //     }
    // }

    // for(int i=0; i<size; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // // all positive indexes are missing
    // for(int i=0; i<size; i++){
    //     if(arr[i]>0){
    //         cout <<"Missing numbers: "<< i+1 << endl;
    //     }
    // }


    // 2nd method -- sorting and swapping
    int i=0; 
    while(i<size){
        int idx = arr[i] - 1;
        if(arr[i] != arr[idx]){
            swap(arr[i], arr[idx]);
        }
        else{
            ++i;
        }
    }

    cout << "Values after arranging: "<< endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Missing element is: "<< endl;
    for(int i=0; i<size; i++){
        if(arr[i]!=i+1){
            cout << i+1 << endl;
        }
    }

}

int main(){
    int arr[] = {1,3,5,3,4};
    int size = 5;
    findMissing(arr,size);
    return 0;
}