#include<iostream>
using namespace std;
#define PI 3.14
float areaCircle(int radius){
    return PI * radius * radius;
    
}
int main(){
    float radi;
    cout << "Enter the radius of the circle: ";
    cin >> radi;
    
   float res =  areaCircle(radi);
   cout << "Area of the circle is: "<<res <<endl;
    return 0;
}