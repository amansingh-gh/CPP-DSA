#include<iostream>
using namespace std;

int main(){
    int arr[6] = {10,20,30,40,50,60};
    int size = 6;

    int st = 0, end = size-1;
    for(int i=0; i<6; i++){
        if(st>end){
            break;
        }
        cout << arr[st] << " ";
        cout << arr[end] << " ";
        st++;
        end--;
    }
    
    return 0;
}