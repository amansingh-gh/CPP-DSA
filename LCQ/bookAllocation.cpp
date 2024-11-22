#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    // isPossible Function
    bool isPossible(int A[], int N, int M, int sol){
        int pageSum = 0;
        int c = 1;
        for(int i=0; i<N; i++){
            if(A[i] > sol){
                return false;
                
            }
                if(pageSum + A[i]>sol){
                    c++;
                    pageSum = A[i];
                    if(c>M){ return false; }
            }
            else{
                pageSum += A[i];
            }
        }
        return true;
    }

    int findPages(int A[], int N, int M) 
    {
        if(M>N) return -1;
        int st= 0;
        int end = 0;
        for(int i=0; i<N; i++){
            end += A[i];
        }
        int ans = -1;
        
        while(st<=end){
            int mid = (st+end)/2;
            if (isPossible(A, N, M, mid)){
                ans =mid;
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
            return ans;
    }
};


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}