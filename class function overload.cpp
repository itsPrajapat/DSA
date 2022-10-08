#include<iostream>
#include<string>
using namespace std;

class laptop
{
    public :
    string name;
    int processor;

    void run()
    {
        cout<<"void run is running"<<endl;
    }

    void run(int a)
    {
        cout<<a<<" int run is running"<<endl;
    }

};                       // whenever we define class then we have to write semi-colon in last

int main(){

    laptop l;
    l.run();
    l.run(5);

    
    return 0;
}