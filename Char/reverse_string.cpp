#include <iostream>
#include <string.h>
using namespace std;

void revStr(char ch[])
{
    int i = 0;
    int n = strlen(ch);
    int j = n - 1;
    while (i <= j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }

    //  Using for loop
    for (; i <= j;)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}

int main()
{
    char ch[100];
    cin.getline(ch, 50);
    cout << "Initial character is : " << ch << endl;
    revStr(ch);
    cout << "The Reversed String is : " << ch << endl;
    ;
    return 0;
}