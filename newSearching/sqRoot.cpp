#include<iostream>
#include<vector>
using namespace std;

int sqRoot(int n){
    int st = 0, end = n, mid = st+(end-st)/2;
    int target = n, ans = -1;
    while(st<=end){
        if(mid*mid > target){
            // left search
            end = mid - 1;
        }
        else if(mid * mid < target){
            ans = mid;
            st = mid + 1;
        }
        else{
            return mid;
        }
        mid = st+(end-st)/2;
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int res = sqRoot(n);
    cout << res << endl;

    int precision ;
    cout << "Enter Precision ";
    cin >> precision;

    double step = 0.1;
    double finalAns = res;
     
    for(int i=0; i<precision; i++){
        for(double j=finalAns; j*j <= n; j = j+step){
            finalAns = j;
        }
        step = step / 10;
    }
    cout << "Final ans : "<< finalAns << endl;

    return 0;
}