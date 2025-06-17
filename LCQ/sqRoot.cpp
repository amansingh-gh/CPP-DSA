#include<iostream>
#include<vector>
using namespace std;
int findSQ(int n){
    int st = 0, end = n, target = n;
    int ans = -1;
    while(st<end){
        int mid = st+(end-st)/2;
        if(mid*mid ==n){
            return mid;
        }
        if(mid*mid > target){
            end = mid - 1;
        }
        else{
            ans = mid;
            st = mid+1;
        }
    }
    return ans;
}
int main(){
    cout << "Enter value: ";
    int n;
    cin >>  n;
    cout << "Sq is: " << findSQ(n);
    return 0;
}