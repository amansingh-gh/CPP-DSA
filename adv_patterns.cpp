#include <iostream>
int main()
{
    using namespace std;

    // Left shift and right shift operator
    int a = 5;
    a = a << 5;    // left shift  num*2;
    cout << a << endl;
    a = a >> 1;  // Right shift   num/2;
    cout << a << endl;


    // pre-post increment/decrement      
    int p = 5;
    cout << (++p) * (++p);
    int n;
    cout << "Enter n: ";
    cin >> n;

    // flipped solid diamond
        // Upper section
    for (int row = 0; row < n; row++)
    {
        // for inverted flip traingle
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        // full pyramid space

        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }

        cout << endl;
    }

        // lower section
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < row + 1; col++)
            {
                cout << "*";
            }
            //  lower full pyramid space

            for (int col = 0; col < 2 * n - 2 * row - 1; col++)
            {
                cout << " ";
            }
            for (int col = 0; col < row + 1; col++)
            {
                cout << "*";
            }
            cout << endl;
        }


    for(int row=0; row<n; row++){
        // for spaces
        for(int col=0; col<n-row-1; col++){
            cout << " ";
        }
        // for stars
        for(int col=0; col<2*row+1; col++){
            if(col==0 || col==2*row){
                // frist character
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    // Full pyramid
        int row_num;
        cout << "Enter the rows num: ";
        cin >> row_num;
        for (int row = 0; row < row_num; row++)
        {
            // for spaces
            for (int col = 0; col < row_num - row - 1; col++)
            {
                cout << " ";
            }
            for (int col = 0; col < row + 1; col++)
            {
                cout << "* ";
            }
            cout << endl;
        }

    //  Full pyramid
        int n;
        cout << "Enter the n: ";
        cin >> n;

        for(int row=0; row<n; row++){
            // for space
            for(int col=0; col<row; col++){
                cout << " ";
            }
            for(int col=0; col<n-row; col++){
                    cout << " *";
                }
            cout << endl;
        }

    //  Full Diamond
    int fp;
    cout << "Enter the rows num: ";
    cin >> fp;
    for (int row = 0; row < fp; row++)
    {
        // for spaces
        for (int col = 0; col < fp - row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for(int row=0; row<fp; row++){
        // for space
        for(int col=0; col<row; col++){
            cout << " ";
        }
        for(int col=0; col<fp-row; col++){
                cout << "* ";
            }
        cout << endl;
    }
}