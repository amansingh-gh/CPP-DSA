#include <iostream>
using namespace std;

void lastOccurence(string&s, char x, int i, int& ans){
    //base case
    if(i>=s.size()) return;
    //sovle 1 problem
    if(s[i]==x) ans = i;
    //recursive call
    lastOccurence(s,x,i+1,ans);
}

int main(){

    string s;
    cout << "Enter the string : ";
    cin >> s;

    char x;
    cout << "Enter the character target: ";
    cin >> x;

    int ans = -1;
    int i = 0;

    lastOccurence(s,x,i,ans);

    cout << "The last occurence of " << x << " is " << ans;
    

    return 0;
}