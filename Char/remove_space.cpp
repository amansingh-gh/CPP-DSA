#include <iostream>
#include <string.h>
using namespace std;

void removeSpace(char sentence[])
{
    int i = 0;
    int n = strlen(sentence);
    for (int i = 0; i < n; i++)
    {
        if (sentence[i] == ' ')
        {
            sentence[i] = '-';
        }
    }
}

int main()
{
    char sentence[100];
    cin.getline(sentence, 50);
    removeSpace(sentence);
    cout << "New sentence is : " << sentence << endl;

    return 0;
}