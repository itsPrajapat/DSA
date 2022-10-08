// In multiple inheritance, a class can inherit more than one class. This means that in this type of inheritance, a single child class can have multiple parent classes

#include<iostream>
using namespace std;


// parent class
class Animal{

    public:
    void eat(){
        cout<<"Eating"<<endl;
    }
};

// parent class 
class Dog{

    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};

// Multilevel Inheritance
class BabyDog: public Animal, public Dog{

    public:
    void weep(){
        cout<<"weeping"<<endl;
    }
};

int main(){

    // Creating an object of the child
    BabyDog obj; 

     // calling methods 
        obj.eat();
        obj.bark();
        obj.weep();
    
    return 0;
}