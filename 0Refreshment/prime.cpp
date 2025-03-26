#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    
    for(int i=2; i<n; i++){
        if(n%2==0){
            cout << "Not prime";
        }
        else{
            cout << "Prime";
        }
    }
    return 0;
}