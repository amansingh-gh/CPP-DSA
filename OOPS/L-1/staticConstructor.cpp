#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;
    string name;

    // Default Constructor
    Animal(){
        this->age = 0;
        this->weight=0;
        this->name="";
    }


    // Parametrized constructor
    Animal(int age){
        this->age = age;
        cout << "Parametrized constructor called" << endl;
        cout << "Age is: "<<age << endl;
    }

    void eat(){
        cout << "Animal is eating";
    }
};

int main(){
    // Animal* ani = new Animal();
    Animal ani;
    ani.age = 50;


    return 0;
}