#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    bool isPossible(int arr[], int n, int k, long long mid){
        long long timeSum = 0;
        int c = 1;
        for(int i=0; i<n; i++){
            if(arr[i]>mid){
                return false;
            }
            if(arr[i] + timeSum > mid){
                c++;
                timeSum = arr[i];
                if(c>k) return false;
            }
            else{
                timeSum += arr[i];
            }
        }
        return true;
    }
    
    long long minTime(int arr[], int n, int k)
    {
        long long st = 0;
        long long end = 0;
        for(int i=0; i<n; i++){
            end += arr[i];
        }
        long long ans = -1;
        while(st<=end){
            long long mid = st+(end-st)/2;
            if(isPossible(arr,n,k,mid)){
                ans = mid;
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return ans;
    }
};



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
