#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    char ch;
    str = "Hey buddy";

    str.push_back('Z');
    str.pop_back();
    cout << str.substr(0,2) << " ";

    for(int i=0; i<str.length(); i++){
        cout << str[i];
    }
    cout << endl;

    cout << str << endl;
    
    // getline(cin,str);
    // cout << str << endl;

    // Compare
    string a = "abc";
    string b = "XYZ";


    if( a.compare(b) == 0){
        cout << "Strings are same";
    }
    else{
        cout << "Strings are not same";
    }
    cout << endl;

    string nn = "Hey this is new stirng nn";
    string target = "this";

    cout << nn.find(target);

    return 0;
}