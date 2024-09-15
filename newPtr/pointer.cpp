#include<iostream>
using namespace std;

int main(){
    int x = 90;
    int* zz = &x;
    cout << "The address of  zz is : " << zz << endl;
    cout << "The value under zz is : " << *zz;


    // Check the size of int, char and double datatype
    int a = 5;
    int *ptr1 = &a;
    cout << "The size of a is :" <<sizeof(ptr1) << endl;

    char ch = 'a';
    char *ptr2 = &ch;
    cout << "The size of a is :" << sizeof(ptr2) << endl;

    double dr = 1.90;
    double *ptr3 = &dr;
    cout << "The size of a is :" << sizeof(ptr3) << endl;

    int *ptrz;
    cout << ptrz << endl;  // Segmentation error or Garbage Value

    return 0;
}