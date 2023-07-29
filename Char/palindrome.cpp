#include <iostream>
#include <string.h>
using namespace std;

bool palindrome(char ch[])
{
    int i = 0;
    int n = strlen(ch);
    int j = n - 1;
    while (i <= j)
    {
        if (ch[i] != ch[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    char ch[100];
    cin.getline(ch, 100);
    cout << "You typed : " << ch << endl;
    palindrome(ch);
    if (palindrome(ch) == 0)
    {
        cout << "This is not palindrome";
    }
    if (palindrome(ch) == 1)
    {
        cout << "This is the palindrome";
    }

    return 0;
}