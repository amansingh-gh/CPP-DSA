#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int solveCut(int n, int x, int y, int z){
    if(n==0) return 0;
    if(n<0) return INT_MIN;

    int a = solveCut(n-x, x,y,z) + 1;
    int b = solveCut(n-y, x,y,z) + 1;
    int c = solveCut(n-z, x,y,z) + 1;

    int answer = max(a,max(b,c));
    return answer;
}

int main(){
   int n = 7, x= 5, y=2, z=2; 
    int ans =  solveCut(n,x,y,z);
    cout << ans << endl;
    return 0;
}