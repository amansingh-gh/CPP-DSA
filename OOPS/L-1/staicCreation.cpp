#include<iostream>
using namespace std;
class Animal{
    private:
    int weight;

    public:
    int age;
    string name;

    void eat(){
        cout << name << " is eating" << endl;
    }

    int getWeight(){
       return weight; 
    }
    void setWeight(int w){
        weight = w;
    }
};

int main(){

    // Static Memory Allocation
    Animal ani;
    ani.age = 15;
    ani.name = "XYZ";

    ani.setWeight(100);

    cout << sizeof(Animal) << endl;
    cout << "Age of animal: "<< ani.age << endl;
    cout << "Name of animal is: " << ani.name << endl;
    cout << "Weight is: "<< ani.getWeight() << endl;
    ani.eat();
    
    return 0;
}