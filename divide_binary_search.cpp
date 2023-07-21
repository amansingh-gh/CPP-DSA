// Divid using binary search
#include<iostream>
using namespace std;

int solve(int dividend ,  int divisor){
    int ans = 0;
    int start = 0;
    int end = abs(dividend);
    int mid = start+(end-start)/2;
    while(start<=end){
        if(abs(mid*divisor) == abs(dividend)){
            ans = mid;
            break;
        }
        else if(abs(mid*divisor) > abs(dividend)){
            end = mid-1;
        }
        else {
            ans = mid;
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    if((divisor<0 && dividend<0) || (divisor>0 && dividend>0)){
        return ans;
    }
    else{
        return -ans;
    }
}

int main(){
    int dividend = -2147483648;
    int divisor = -1;

    int ans = solve(dividend,divisor);
    cout << "The answer is : " << ans << endl;
}