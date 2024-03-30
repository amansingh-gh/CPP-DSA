#include <iostream>
using namespace std;

// int  avgSum(int &x, int &y){
//     return x+y;
// }
int avgSum(int x, int y);
    
// void printLoop(){
//     int n;
//     cout << "Enter the size of n: ";
//     cin >> n;
//     for(int i=0; i<n; i++){
//         cout << "The name is Singh" << endl;
//     }
// }

int main(){
    // printLoop();
    int a = 40, b=60;
//    cout << avgSum(a,b);

 cout << avgSum(a,b);
 return 0;
}

int avgSum(int x, int y)
{
    return x+y;
    
}