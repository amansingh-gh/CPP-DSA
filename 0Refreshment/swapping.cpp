#include<iostream>
using namespace std;
void swapVal(int arr[], int size){
    int st = 0, end = size-1;
    while(st<=end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
}
int main(){
    int arr[5] = {10,20,30,40,50};
    int size = 5;
    swapVal(arr,size);
    for(auto i : arr){
        cout << i << " ";
    }
    return 0;
}