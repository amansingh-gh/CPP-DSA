#include<iostream>
#include<string>
using namespace std;

string findOcc(string str, string part){
    int pos = str.find(part);
    
    while(pos != string::npos){
            str.erase(pos, part.length());
            pos = str.find(part);
    }
    return str;
}

int main(){
    string str =  "axxxxyyyyb";
    string part = "xy";
    string ans = findOcc(str,part);
    cout << ans << endl;
    return 0;
}