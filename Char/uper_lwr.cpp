#include <iostream>
#include <string.h>
using namespace std;

void upperToLower(char ch[])
{
    int n = strlen(ch);
    for (int i = 0; i < n; i++){
        ch[i] = ch[i] - 'A' + 'a';
    }
}

int main()
{
    char ch[100];
    cout << "Enter ch/string: ";
    cin.getline(ch, 50);
    upperToLower(ch);
    cout << "Your lowe case is: " << ch << endl;

    return 0;
}