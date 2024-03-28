#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main(){

    string str  = {'a','b','c','d'};
    for(int i=0; i<=str.size(); i++){
        int n  = sizeof (str)/ sizeof (str[0]);
        for(int j=i+1; j<=n; j++){
            cout << str.substr(i,j)<< endl;
        }
    }

    return 0;
}