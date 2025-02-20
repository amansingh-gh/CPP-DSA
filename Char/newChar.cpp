#include<iostream>
#include<string.h>
using namespace std;

int main(){
    // // User Input
    // char ch[5];
    // cout << "Enter the character : ";
    // for(int i=0; i<5; i++){
    //     cin >> ch[i];

    // }
    // // Printing
    // cout << "Your input is : ";
    // for(auto i : ch){
    //     cout << i<< " ";
    // }

    // Otehr user input
    char name[100];
    cin >> name;
    for(int i=0; i<4; i++){
        cout << name[i] << endl;
    }
    int val = (int)name[5];   // position 5 in array is blank so it append it here null character i.e -> 0;
    cout << val;


    // Taking input full sentence
    // char ch[100];
    // // cin >> ch;
    // // cin.getline(ch), 50;
    // cout << ch;


 
    return 0;
}