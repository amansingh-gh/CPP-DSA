#include <iostream>
int main()
{
    using namespace std;

    // Solid rectangle
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << " * ";
        }
        cout << endl
             << endl;
    }

    // Solid square using user input
    int row = 0;
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    for (; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    // Hollow rectangle
    int i, j, rows, col;
    cout << "Enter the row: ";
    cin >> rows;
    cout << "Enter the columns: ";
    cin >> col;
    for (i = 0; i <= rows; i++)
    {
        for (j = 0; j <= col; j++)
        {
            if (i == 0 || i == rows || j == 0 || j == col)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    // Rehollow rectangle using user input
    int p, q, row, col;
    cout << "Enter row for hollow rectangle: ";
    cin >> row;
    cout << "Enter col for hollow rectangle: ";
    cin >> col;
    for(int i=0; i<=row; i++){
        for(int j=0; j<=col; j++){
            if(i==0 || i==row || j==0 || j==col){
                cout << " * ";
            }
            else{
                cout << "   ";
            }
        }
        cout << endl;
    }

    //  Half pyramid
    int r, s, roww;
    cout << "Enter row for Half pyramid: ";
    cin >> roww;
    for (int r = 0; r < roww; r++)
    {
        for (int s = 0; s < r+1; s++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    // inverted pyramid
    int n;
    cout << "Enter the value of length of n : ";
    cin >> n;
    for (int row = 0; row <= n; row++)
    {
        for (int col = 0; col <= n - row; col++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    // Numeric half pyramid
    int num_hlf_pyr;
    cout << "Enter the value of length of num_hlf_pyr : ";
    cin >> num_hlf_pyr;
    for (int row = 0; row <= num_hlf_pyr; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1;
        }
        cout << endl;
    }

    // Numeric half inverted pyramid
    int num_hlf_inv_pyr;
    cout << "Enter the value of length of num_hlf_inv_pyr : ";
    cin >> num_hlf_inv_pyr;
    for (int row = 0; row <= num_hlf_inv_pyr; row++)
    {
        for (int col = 0; col < num_hlf_inv_pyr - row; col++)
        {
            cout << col + 1;
        }
        cout << endl;
    }

    int z  =(1,2,3);
    cout << z;
}