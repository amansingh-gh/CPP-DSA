#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>arr{50,20,10,100,36,71,11,5};

    sort(arr.begin(), arr.end());

    cout << "Sorted array ares: "; 
    for(auto i: arr){
        cout << i << "  " ; 
    }
    cout << endl;

    int ans = binary_search(arr.begin(), arr.end(),5);
    cout << "Found at index : "<<ans-1;

    return 0;
}