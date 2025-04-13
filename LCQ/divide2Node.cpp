#include<iostream>
#include<vector>
using namespace std;

int dividee(int dividend, int divisor){
    int st = 0;
    int end = abs(dividend);
    int mid = st + (end-st)/2;
    int quotient = -1;
    while(st<=end){
        if(abs(mid*divisor)==abs(dividend)){
            quotient = mid;
            break;
        }
        if(abs(mid*divisor) > abs(dividend)){
            end = mid-1;
        }
        else{
            quotient = mid;
            st = mid+1;
        }
        mid = st + (end-st)/2;
    }
    // return quotient;
    if((divisor<0 && divisor<0)||(divisor>0 && dividend>0)){
        return quotient;
    }
    else{
        return -quotient;
    }
}

int main(){
    int dividend = 10;
    int divisor = -2;
    int ans = dividee(dividend,divisor);
    cout << ans; 

    return 0;
}