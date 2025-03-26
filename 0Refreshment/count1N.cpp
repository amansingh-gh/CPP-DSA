#include<iostream>
using namespace std;
void coutnNum(int n){
    for(int i=1; i<=n; i++){
        cout << i << " ";
    }
}
int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    coutnNum(n);
    return 0;
}