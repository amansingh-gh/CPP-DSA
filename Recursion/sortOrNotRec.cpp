#include<iostream>
using namespace std;
bool check(int arr[], int n,int i){
    if(i==n-1) return true;;

    if(arr[i+1]>arr[i]){
        return false;
    }

    return check(arr, n, ++i);

}

int main(){
    int arr[] = {10,20,30,40,60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = check(arr,n,0);
    cout << ans << endl;
    return 0;
}