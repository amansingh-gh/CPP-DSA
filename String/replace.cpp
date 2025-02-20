#include<iostream>
using namespace std;

int main(){
    string str1 = "this is txt string 1";
    string str2 = "Hey";

    // str1.replace(5,2, str2);
    str1.erase(4,1);

    cout << str1 << endl;

    return 0;
}