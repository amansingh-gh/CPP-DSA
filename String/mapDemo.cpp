#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string>mp;
    mp[0] = "aman";
    mp[1] = 'x';

    cout << mp[0] << endl;

    return 0;
}