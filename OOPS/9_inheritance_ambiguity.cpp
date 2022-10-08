#include<iostream>
using namespace std;


class A{
    public:
    void abc(){
        cout<<"Class A"<<endl;
    }
};

// parent class 
class B{
    public:
    void abc(){
        cout<<"Class B"<<endl;
    }
};

// Multilevel Inheritance
class C: public A, public B{

};

int main(){

    // Creating an object of the child
    C obj; 

    // obj.abc();   // will throw an error, compiler will get confused which abc() we have to print

    // Syntax:
    // object.class_name::method_name(); 

     // calling methods 
        obj.A::abc();
        obj.B::abc();
    
    return 0;
}