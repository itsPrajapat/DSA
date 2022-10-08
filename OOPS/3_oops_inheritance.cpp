#include<iostream>
using namespace std;

// super class
class Human{

    public:
    int height;
    int weight;
    private:
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight = w;
    }
};

// sub/child class
class Male: public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }
};

int main(){

    Male obj1;
    // cout<<obj1.age<<endl; // can't access coz age is a private member in super class
    obj1.setWeight(80);
    cout<<obj1.weight<<endl;
    cout<<obj1.height<<endl;

    cout<<obj1.color<<endl;
    
    return 0;
}