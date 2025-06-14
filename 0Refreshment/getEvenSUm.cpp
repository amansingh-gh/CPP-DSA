#include<iostream>
using namespace std;
void getEvenCnt(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        cout << "Value of i is: "<< i << endl;
        if(i%2==0){
            sum += i;
        }
    }
    cout << "Count sum is: " << sum << endl;
}
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    getEvenCnt(n);
    return 0;
}