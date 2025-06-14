#include<iostream>
#include<vector>
using namespace std;

double findSqrt(int nums){
        int st = 0;
        int end = nums;
        int mid = st+(end-st)/2;
        int ans = -1;

        while(st<=end){
            if(mid*mid==nums){
                return mid;
            }
            if(mid*mid > nums){
                end = mid - 1;
            }
            else{
                ans = mid;
                st = mid + 1;
            }
            mid = st+(end-st)/2;
        }
        return ans;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    double ans = findSqrt(n);
    

    double precision;
    cout << "Enter the digit you want after the point : ";
    cin >> precision;

    double step = 0.1;
    double finalAns = ans;
    for(int i=0; i<precision; i++){
        for(double j=finalAns; j*j<=n; j += step){
            finalAns = j;
        }
        step /= 10;
    }

    cout << "The final answer of square root is : " <<  finalAns;

    return 0;
}