#include<iostream>
using namespace std;

int chngeValue1(int a, int b){
    int sum = a+b;
    return sum;
}

void chngeValue2(int *a, int *b){
    *a = *a+10;
    *b = *b+10;
}

int main(){
    int a = 90;
    int b=10;
    int s1 = chngeValue1(a,b);
    cout << "Changeble value 1: "<<s1 << endl << endl;

    chngeValue2(&a,&b);
    cout << "a: "<< a << "\nb: " << b << endl;

    return 0;
}
