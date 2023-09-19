#include <iostream>
using namespace std;

void checkKey(string str, int i, int n, char key){
    if(i>=n) return ;
    if(str[i]==key) {
        cout << "Found at: "<<i << endl;
    }
    return checkKey(str, i+1, n, key);
}

int main(){
    string str = "amansingh";
    int n = str.length();
    char key  = 'n';

    int i =0;
    checkKey(str, i, n, key);
    // cout << "Answer is : " << ans << endl;
    return 0;
}