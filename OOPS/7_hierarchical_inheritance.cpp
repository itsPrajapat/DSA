// In hierarchical inheritance, one class serves as a base class for more than one derived class.


#include<iostream>
using namespace std;

// parent class
class Animal{

    public:
    void eat(){
        cout<<"Eating"<<endl;
    }
};

// child class 1
class Dog: public Animal{

    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};

// child class 2
class Cat: public Animal{

    public:
    void meow(){
        cout<<"meowing"<<endl;
    }
};

int main(){

    // Creating an object of the child
    Cat obj; 

     // calling methods 
        obj.eat();
        obj.meow();
    
    return 0;
}