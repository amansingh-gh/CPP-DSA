#include<iostream>
using namespace std;
int linearSearch(int arr [], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return 1;
        }
    }
        return -1;
}
int main(){
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int target = 10;
     int res =  linearSearch(arr,size,target);
     if(res == 1){
        cout << "Index Found"<<endl;
     }
     else{
        cout << "Not Found"<<endl;
     }


     return 0;
}