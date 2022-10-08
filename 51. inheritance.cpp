// Inheritance
// --> It is possible to inherit attributes and methods from one class to another 


// --> Derived Class(child) - the class that inherits from another class
// --> Base Class(parent) - the class being inherited from 

// Types of Inheritance
// 1. Single inheritance
// 2. Multiple inheritance
// 3. Multi level inheritance
// 4. Hybrid inheritance
// 5. Hierarchical inheritance


// Single Inheritance
/*
#include<iostream>
using namespace std;

class A{
    public:
    void func(){
        cout<<"Inherited";
    }
};

// class A ke public and protected attributes Class B ke public me aa jayenge
class B : public A {

};

int main(){

    B b;
    b.func();
    
    return 0;
} */




// Multiple Inheritance
/*
#include<iostream>
using namespace std;

class A{
    public:
    void Afunc(){
        cout<<"Func A"<<endl;
    }
};

class B{
    public:
    void Bfunc(){
        cout<<"Func B"<<endl;
    }
};

class C : public A, public B {

};

int main(){

    C c;
    c.Afunc();
    c.Bfunc();
    
    return 0;
} */




// Multi Level Inheritance
/*
#include<iostream>
using namespace std;

class A{
    public:
    void Afunc(){
        cout<<"Func A"<<endl;
    }
};

class B : public A{
    public:
    void Bfunc(){
        cout<<"Func B"<<endl;
    }
};

class C : public B {
public:
};

int main(){

    C c;
    c.Afunc();
    c.Bfunc();
    
    return 0;
} */



// Q. CBSE 2019 Computer Science 
/*
#include<iostream>
using namespace std;

class Ground{
    int Rooms;
 protected:
    void Put();
 public:
    void Get();
};

class Middle: private Ground{
    int Labs;
 public:
    void Take();
    void Give();
};

class Top: public Middle{
    int Roof;
 public:
    void In();
    void Out();
};

int main(){

    Top T;
    
    return 0;
} */

/*
(1) Which type of inheritance is this ?
Ans: Multilevel Inheritance  
*/

/* 
(2) Write the names of all the members, which are directly accessible by the memeber function Give() of class Middle ?
Ans: 
    Data Memebers: Labs
    Member Function: Put(), Get(), Take(), Give() 
*/

/* 
(3) Write the names of all the members, which are directly accessible by the memeber function Out() of class Top ?
Ans: 
    Data Memebers: Roof
    Member Function: Take(), Give(), In(), Out()  
*/

/* 
(4) Write the names of all the members, which are directly accessible by the object T of class Top declared in main() function?
Ans: 
    Member Function: Take(), Give(), In(), Out() 
*/


