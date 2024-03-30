#include<iostream>
using namespace std;

int findFacto(int n){
    int findFacto = 1;
    for(int i=1; i<=n; i++){
        findFacto = findFacto*i;
    }
    // return findFacto;
    cout << "Factoial of "<<n<<" is " << findFacto << endl;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // int ans = findFacto(n);
    // cout << "Factoial of "<<n<<" is " << ans << endl;
    findFacto(n);

    return 0;
}