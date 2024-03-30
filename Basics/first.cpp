#include <iostream>
int main()
{
    using namespace std;
    std::cout << "Hello Duniya\n";
    cout << "Hello world\n";

    //  print - cout
    // input - cin
    cout << "Enter a number: ";
    int a;
    cin >> a;
    cout << "You eneterd " << a << endl;

    // int b;
    // int sum ;
    //  << a+b;
    // cout << "You entered "<< sum;

    long long j = 5;
    cout << sizeof(j) << endl;

    char ch = 'a';
    cout << "The character is : " << ch << endl;

    bool flag = false;
    cout << "The flag is : " << flag << endl;

    //  True = 1; false = 0;   it takes 1 byte

    // Type Castring (Implicit/Explicit)
    int ab = 57;
    int abc = float(ab); // This is the method to change any datatype into other datatype  like: int(x);
    cout << "The abc is : " << abc << endl;

    char cha = 90;
    cout << cha << endl; // it prints the ASCII value;
}