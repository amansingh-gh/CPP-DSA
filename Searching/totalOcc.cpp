//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int count(int arr[], int n, int target) {
	    int first = -1;
	    int last = -1;
	    
	    int st = 0;
	    int end = n-1;
	   // int mid = st + (end-st)/2;
	    
	   // int count = first + last + 1;
	    
	    while(st<=end){
	        int mid = st + (end - st) / 2;
	        if(arr[mid]==target){
	            first = mid;
	            end = mid-1;
	        }
	        else if(arr[mid]>target){
	            end = mid -1;
	        }
	        else{
	            st = mid+1;
	        }
	    }
	    
	    st = 0;
	    end = n-1;
	    while(st<=end){
	        int mid = st + (end - st) / 2;
	        if(arr[mid]==target){
	            last = mid;
	            st = mid+1;
	        }
	        else if(arr[mid]<target){
	            st = mid + 1;
	        }
	        else{
	            end = mid - 1;
	        }
	    }
	    
	    if(first!=-1 && last!=-1){
	        return last - first + 1;
	    }
	    
	return 0;
	}
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
