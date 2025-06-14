#include<iostream>
#include<string>
using namespace std;

bool compare(string &a , string &b){
    if(a.length() != b.length()){
        return false;
    }
    else{
        for(int i=0; i<a.length(); i++){
            if(a[i]!=b[i]){
                return false;
            }
            i++;
        }

    }
    return true;
}

int main(){
    string a = "abc";
    string b = "abc";

    bool ans = compare(a,b);
    if(ans == 1){
        cout << "Strings are same";
    }
    else{
        cout << "Not same";
    }
    return 0;
}