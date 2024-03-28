#include <iostream>
using namespace std;

int findMax(int num1, int num2, int num3){
    if(num1>num2 && num1>num3){
        return num1;
    }
    else if(num2>num1 && num2>num3){
        return num2;
    }
    else{
        return num3;
    }
}

int main(){
    int a=20, b=50, c=25;
    cout << findMax(a,b,c);
    return 0;
}
