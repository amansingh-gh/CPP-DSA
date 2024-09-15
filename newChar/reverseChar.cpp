#include<iostream>
#include<string.h>
using namespace std;

void revCh(char ch1[]){
    int i=0;
    int j = strlen(ch1)-1;
    // Using while loop
    // while(i<=j){
    //     swap(ch1[i], ch1[j]);
    //     i++;
    //     j--;
    // }

    // Using for loop
    for (; i <= j;){
         swap(ch1[i], ch1[j]);
         i++;
         j--;
    }
    

}

int main(){
    char ch1[100];
    cout << "Enter the name here: ";
    cin >> ch1;

    revCh(ch1);
    cout << ch1;
    return 0;
}