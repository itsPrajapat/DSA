
#include<iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

    void eat(){
        cout<<"Eating"<<endl;
    }
};

class Dog: public Animal{

    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};

int main(){

    // Creating an object of the child
    Dog obj; 

     // calling methods 
        obj.eat();
        obj.bark();
    
    return 0;
}