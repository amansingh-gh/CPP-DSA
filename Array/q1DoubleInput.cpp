#include <iostream>
using namespace std;

int main()
{
    int arr[500];
    int n;
    cout << "How many numbers you want to add : " << endl;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Double: ";
    for(int i=0; i<n; i++){
        cout << 2 * arr[i] << " ";
    }

    return 0;
}