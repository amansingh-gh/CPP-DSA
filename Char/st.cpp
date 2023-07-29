#include <iostream>
#include <string.h>
using namespace std;

int getLength(char cch[])
{
    int length = 0;
    int i = 0;
    while (cch[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

int main()
{

    char ch[10];
    ch[0] = 'a';
    ch[1] = 'z';
    cout << ch << endl;

    char a[10];
    cin >> a;
    for (int i = 0; i < 4; i++)
    {
        cout << "index: " << i << " value: " << a[i] << endl;
    }

    // It only read line until it found space,tab or enter in the line
    char cc[100];
    cin >> cc;
    cout << cc;

    // Read full line
    char cca[100];
    // getline(cin, cca);
    cin.getline(cca, 50);
    cout << cca;
    char cch[100];
    cin.getline(cch, 50);
    cout << "The length of cch string is: " << getLength(cch) << endl;
    // Pre defined functon to find the length of character
    cout << strlen(cch) << endl;

    return 0;
}