#include <iostream>
int main()
{
    using namespace std;

    // Conditional statements (if-else)
    int cond = 34;
    cout << "Enter the value of a_con: ";
    int a_con;
    cin >> a_con;
    if (a_con > 34)
    {
        cout << "a_con is greater then cond";
    }
    else if (a_con == 0)
    {
        cout << "Please enter other value except 0";
    }
    else
    {
        cout << "a_con is not !greater then cond";
    }

    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18 && age <= 99)
    {
        cout << "You can vote and drive";
    }
    else if (age <= 0)
    {
        cout << "Enter valid input";
    }
    else if (age >= 100)
    {
        cout << "Enter in range";
    }
    else
    {
        cout << "You cannot vote as well as drive";
    }

    //  Loops  (for, while , do-while, for each)
    for(int i=0; i<=5; i++){
        cout << "Hey" << endl;
    }

    // Table using user input
    int n;
    cout << "Enter the table number : ";
    cin >> n;
    for(int i=1; i<=10; i++){
        cout << "The table of " << n << " is " << n*i << endl;
    }

    for(int i=1; i<10; i*=2){
        cout << i << endl;
    }

    // Unique question
    int x = 1;
    for (;;)
    {
        if (x <= 5)
        {

            cout << x << endl;
            x++;
        }
    }

}