// FUnction to find the area of the circle ..
// FUcntion to find the number is even or odd ..
#include <iostream>
using namespace std;

// function to find the area of the circle
// float areaCircle(int r){
//     float pie = 3.14;
//     return pie*r*r;
// }

bool numCheck(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    // Find the area of the circle
    // int r;
    // cout << "Enter the radius of the circle: ";
    // cin >> r;
    // cout << areaCircle(r);

    int n;
    cout << "Enter the number to verify the number is even or odd: ";
    cin >> n;
    int checkSum = numCheck(n);
    if(checkSum==1){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd";
    }

    return 0;
}