#include<iostream>
using namespace std;

void countZeroOne(int arr[], int size){
    int numZero = 0;
    int numOne = 0;
    int i;
    for(i=0;i<size;i++){
        if(arr[i]==0){
            numZero++;
        }
        if(arr[i]==1){
            numOne++;
        }
    }
    cout << "The total number of Zero's are: "<<numZero<< endl;
    cout << "The total number of One's are: "<< numOne<< endl;

}

int main(){
    int arr[] = {0,0,0,1,1,1,0,1,0,1,1,0,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    countZeroOne(arr,size);

    return 0;
}