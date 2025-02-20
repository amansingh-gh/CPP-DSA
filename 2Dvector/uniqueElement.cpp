#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int>arr){
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        ans = ans^arr[i];
        cout << "This is ans "<< ans << endl;
    }
    return ans;
}

int main(){
    int n; cout << "Enter the size of vector: "; cin >> n;

    vector<int>arr(n);

    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }

    int uniqueElement = findUnique(arr);
    cout << "Find Unique ELement is : " << uniqueElement<< endl;



    return 0;
}