// function overloading
/*
#include<iostream>
using namespace std;

class ApnaCollege{
 public:
    void fun(){
        cout<<"I am a function with no arguments."<<endl;
    }
    void fun(int x){
        cout<<"I am a function with int  arguments."<<endl;
    }
    void fun(double x){
        cout<<"I am a function with double arguments."<<endl;
    }
};

int main(){

    ApnaCollege obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);
    
    return 0;
} */





// Operator Overloading
/*
#include<iostream>
using namespace std;

class complex{
 private:
    int real, imag;
 public:
    // constructor
    complex(int r, int i){
        real = r;
        imag = i;
    }
   
   complex operator + (complex const &obj){
       complex res(0, 0);
       res.imag = imag + obj.imag;
       res.real = real + obj.real;
       return res;
   }

   void display(){
       cout<< real <<" + i"<< imag <<endl;
   }
};

int main(){

    complex c1(12, 7) , c2(6, 7);

    complex c3 = c1 + c2;
    c3.display();
  
    return 0;
}   */




// Virtual Function

#include<iostream>
using namespace std;

class base{
 public:
    virtual void print(){
        cout<<"This is the base class's print function"<<endl;
    }

    void display(){
        cout<<"This is the base class's display function"<<endl;
    }
};

class derived : public base{
 public:
     void print(){
        cout<<"This is the derived class's print function"<<endl;
    }

    void display(){
        cout<<"This is the derived class's display function"<<endl;
    }
};

int main(){

    base *baseptr;
    derived d;

    baseptr = &d;

    baseptr -> print();
    baseptr -> display();
    
    return 0;
}