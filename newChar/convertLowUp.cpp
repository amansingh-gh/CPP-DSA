#include<iostream>
#include<string.h>
using namespace std;

// Convert into Lower to Uppercase
// void toUpperCase(char ch[]){
//     int n = strlen(ch);
//     for(int i=0; i<n; i++){
//         ch[i]  = ch[i] - 'a' + 'A';
//     }
// }


// Convert into Upper to Lowercase
void toLowerCase(char ch[]){
    int n = strlen(ch);
    for(int i=0; i<n; i++){
        if(ch[i]>='A' && ch[i]<='Z'){
        ch[i]  = ch[i] - 'A' + 'a';
        }
    }
}

int main(){
    char ch[100];
    cout << "Enter the character to convert into uppercase: ";
    cin >> ch;

    // toUpperCase(ch);
    toLowerCase(ch);
    cout << ch;

    return 0;
}