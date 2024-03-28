#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    // cin >> str;
    str[2]='\0';
    getline(cin,str);           // input sentence
    cout << str <<endl;


    cout << "The string length is : "<< str.length()<< endl;      // string length


    cout << "isEmpty " << str.empty()<<endl;     //  check(0,1) it is empty or not


    str.push_back('Z');              // append at last
    cout << str << endl;


    str.pop_back();                  //pop from end
    cout << str << endl;


    cout << str.substr(0,1)<<endl;   //sub string


    string str_a = "aaaa";
    string str_b = "bbbb";
    cout << str_a.compare(str_b); // 0 means equal


    string x = "Hello Everyone this is me";
    string target = "hey";
    if(x.find(target)==string::npos){
        cout << "Not found";
    }


    string xy = "I am bad progrmmer";
    string pq = "Singh";
    // xy.replace(0,4,pq);
    xy.replace(5,3,"good");   // str
    cout << xy<< endl;


    string erg = "ABCDEFHIJKLMNOPQRSTUVVWXYZ";
    cout << erg.length();
    erg.erase(0,4);
    cout << erg << endl;
    cout << erg.length();

    return 0;
}