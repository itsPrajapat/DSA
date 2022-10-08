#include<iostream>
using namespace std;

class student{
// By default class ke data members private hote unhe hum class ke bahar access nhi kr skte so we use public: to acces the data members outside the class.
    string name;
    public:  
    // string name;
    int age;
    bool gender;

    // Jab bhi hum koi bhi object banayenge aur mene koi parameters pass nhi kare while making that object toh us time hamara default constructor call ho jayega or hume koi error nhi milega 
    student(){
        cout<<"Default Constructor"<<endl;
    }

    // Parameterised Constructor
    student(string s, int a, int g){
        cout<<"Parameterised Constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }

    // Copy Constructor
    student(student &a){
        cout<<"Copy Constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    // Destructor
    ~student(){
        cout<<"Destructor Called"<<endl;
    }

    void setName(string s){
        name = s;
    }

    void getName(){
        cout<<name<<endl;
    }

    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }

    // Operator Overloading
    bool operator == (student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }

};

int main(){

// a is the object of class name student

    // student a;
    // a.name = "Rahul";
    // a.age = 17;
    // a.gender = 0;

    
// Now we will make an array of objects

    // student arr[3];     // arr[i] is the object
    // for(int i=0; i<3; i++){
    //     string s;
    //     cin>>s;
    //     arr[i].setName(s);
    //     cin>>arr[i].age;
    //     cin>>arr[i].gender;
    // }

    // for(int i=0; i<3; i++){
    //     arr[i].printInfo();
    // }


    // Object by constructor
    student a("Urvi", 23, 1);
    // a.printInfo();
    
    // object with default constructor
    student b;

    student c = a;

    if(c==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }
    

    return 0;
}