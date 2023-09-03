#include <iostream>
using namespace std;

void solve(int arr[]){
    cout << "The size of inside solve function " << sizeof(arr) << endl;
}

void update(int *p){
    *p = *p + 10;
}

int main(){
    int arr[10]  = {1,2,3,4,5,6,7,8,9};
    cout << "Size inside main function " << sizeof(arr) << endl;
    solve(arr);

    int a = 10;
    int *ptr = &a;
    update(ptr);
    cout << "the value of a is : " << a << endl;

    return 0;
}