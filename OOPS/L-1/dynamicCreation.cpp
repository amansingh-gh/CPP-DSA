#include<iostream>
using namespace std;

class Animal{

    private:
    int weight;

    public:
    int age;
    string name;

    void eat(){
        cout << "Someone is eating";
    } 

    void setWeight(int weight){
        this->weight = weight;
    }

    int getWeight(){
        return weight;
    }

        // Copy Constructor
        // Animal(Animal &obj){
        //     this->age = obj.age;
        //     this->weight= obj.weight;
        //     this->name = obj.name;
        //     cout << "I am inside copy constructor"<< endl;
        // }


    ~Animal(){
        cout << "Destructor Called "<< endl;
    }

};

int main(){
    Animal *ani = new Animal(); 
    Animal ann;   

    (*ani).age = 20;
    ani->name="cat";
    ani->setWeight(25);

    cout << "Animal age is:: "<< ani->age<< endl;
    ani->eat();
    cout << endl;
    cout << "The weight of animal is: "<<ani->getWeight() << endl;

    delete(ani);

    return 0;
}