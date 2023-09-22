#include <iostream>
#include <vector>
using namespace std;

void printSequence(string str, string output, int i, vector<string>& v){
    //base case
    if(i>=str.length()){
        v.push_back(output);
        return ;
    }
        // exclude
    printSequence(str,output,i+1,v);

    // include
    output.push_back(str[i]);
    printSequence(str,output,i+1,v);
}

int main(){
    string str = "abc";
    string output = "";
    int i=0;
    vector<string>v;
    printSequence(str,output,i,v);
    cout << "The printing sequences are: " << endl;
    for(auto val:v){
        cout << val << " " << endl;
    }
    cout << "The length of sequence string are: " << v.size() << " ";

    return 0;
}