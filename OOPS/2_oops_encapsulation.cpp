#include<iostream>
using namespace std;

class student{

    private:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this->age;
    }

};

int main(){

    student first;

    cout<<"sab shi chal rha hai"<<endl;
    
    return 0;
}