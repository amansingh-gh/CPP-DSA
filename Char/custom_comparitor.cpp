#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(char first, char second){
    return first < second;
}

int main(){
    string x = "tylor";
    sort(x.begin(), x.end(), cmp);
    cout << "The descending order of string is : "<< x << endl;
}


