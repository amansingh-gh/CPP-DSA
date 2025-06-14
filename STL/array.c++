#include<iostream>
#include<array>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    array<int,3> a = {10,20,30};
    for(int i=0; i<a.size(); i++){
        cout << a[i] << " " << "\n";
    }

    cout << "Element at 2 is : "<< a.at(1);

    return 0;
}