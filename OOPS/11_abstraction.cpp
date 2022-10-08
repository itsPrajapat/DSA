// Abstraction means showing only essential information and hiding the details
// Data abstraction refers to providing only necessary information about the outside world's data, hiding the background details or implementation.


#include<iostream>
using namespace std;

class abstraction{

    private:
    int a;
    int b;

    public:
    void set(int x, int y){
        a=x;
        b=y;
    }

    void display(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};

int main(){

    abstraction obj; 
    obj.set(10, 20);
    obj.display();
    
    return 0;
}