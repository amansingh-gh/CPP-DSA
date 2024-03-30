#include <iostream>
#include <cstring>

using namespace std;

void lastOccurence(string&s, char x, int rans){
    char* as = strrchr(s,'a');
    return;
}

int main(){

    string s;
    cout << "Enter the string : ";
    cin >> s;

    char x;
    cout << "Enter the character target: ";
    cin >> x;
    int ans = -1;

    lastOccurence(s,x,ans);
    cout << ans ;
}