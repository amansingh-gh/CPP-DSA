#include <iostream>
using namespace std;

class Animal{
private:
    int weight;
public:
    int age;
    string name;

    void eat(){
        cout << "Animal is Eating" << endl;
    }

    void sleep()
    {
        cout << "Animal is sleeping";
    }

    int getWeight(){
        return weight;
    }

    void setWeight(int w){
        weight = w;
    }

};

int main()
{

    // Static Memory Allocation

    // Animal rmj; // Object creation
    // rmj.age = 10;
    // rmj.name = "Ramesh";

    // cout << "Age of rmj is: " << rmj.age << endl;

    // rmj.eat();
    // rmj.eat();
    // rmj.setWeight(50);

    // cout << "The weight of rmj is: " << rmj.getWeight() << endl;


   // // // Dynamic Memory Allocation
    Animal * a1 = new Animal;

    // Both works
    (*a1).age = 10;
    a1->name="SUBH";

    // a1->setWeight=200;
    
    // Accessing

    a1->eat();


    return 0;
}