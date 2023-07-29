#include <iostream>
#include <string.h>
using namespace std;

void lowerToUpper(char ch[])
{
    int n = strlen(ch);
    for (int i = 0; i < n; i++){
        ch[i] = ch[i] - 'a' + 'A';
    }
}

int main()
{
    char ch[100];
    cout << "Enter ch/string: ";
    cin.getline(ch, 50);
    lowerToUpper(ch);
    cout << "Your upper case is: " << ch << endl;

    return 0;
}