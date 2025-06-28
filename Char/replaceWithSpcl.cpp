#include<iostream>
using namespace std;

int getLen(char name[]){
    int len =0, i = 0;
    while(name[i]!='\0'){
        if(name[i]==' '){
            name[i] = '@';
        }
        len++, i++;
    }
    return len;
}



int main(){
    // char name[] = "Sam Sabun Paul";
    char name[100];
    cin.getline(name,100);
    int len = getLen(name);
    cout << "Replaced name is: "<< name << endl;
    cout << "Length is: " << len << endl;
    return 0;
}