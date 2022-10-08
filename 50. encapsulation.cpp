// Encapsulation
// Hiding "sensitive" data from the user 

// Advantage of Encapsulation
// --> Good coding practice, useful in interviews
// --> Increased security of data 

#include<iostream>
using namespace std;

class A{
    public:
    int a;
    void FuncA(){
        cout<<"Func A"<<endl;
    }

    private:
    int b;
    void FuncB(){
        cout<<"Func B"<<endl;
    }
    protected:
    int c;
    void FuncC(){
        cout<<"Func C"<<endl;
    }
};

int main(){
    
    A obj;
    obj.FuncA();

    // Below two will show an error bcoz we can't accecss private and protected member function outside the class 
    // obj.FuncB();
    // obj.FuncC();


    return 0;
}