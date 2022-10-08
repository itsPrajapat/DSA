#include<iostream>
using namespace std;

class A{

    public:
    void sayHello(){
        cout<<"Hello Prajapat"<<endl;
    }

    void sayHello(string name){
        cout<<"Hello "<<name<<" Prajapat"<<endl;
    }

    void sayHello(char name){
        cout<<"Hello "<<name<<" Prajapat"<<endl;
    }

    void sayHello(string name, int n){
        cout<<"Hello "<<name<<" Prajapat"<<endl;
        cout<<n<<endl;
    }

    // default argument
    int add(int x, int y, int w=0, int z=0){
        return x+y+w+z;
    }
};


// Operator Overloading
class B{

    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator + (B &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"Output : "<<value2-value1<<endl;
    }

    void operator () (){
        cout<<"main bracket hu "<<this->a<<endl;
    }
};


// Run time Polymorphism
class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog: public Animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main(){
/*
    A obj;
    obj.sayHello();
    obj.sayHello("Rahul");
*/


/*
    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1+obj2;
    obj1();
*/


Dog obj;
obj.speak();

    return 0;
}