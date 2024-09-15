#include<iostream>
using namespace std;

void update(int *a, int *b){
    *a = 100;
    *b = 200;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int *p = &arr[1];
    int *q = &arr[2];
    update(p,q);
    return 0;
}