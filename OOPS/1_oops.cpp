// https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118817/offering/1382190 


#include<iostream>
using namespace std;

class Hero{

    private:
    // properties  
    int health;
    char level;

    public:
    static int timeToComplete;

    // Simple constructor
    Hero(){
        cout<<"Constructor Called"<<endl;
    }

    // Paramaterized Constructor
    Hero(int health, char level){
        // cout<<this<<endl;
        this->health = health;  // this is a pointer which points to the address of the current object
        this->level = level;
    }

    // custom copy constructor
    Hero(Hero &temp){
        cout<<"Copy Constructor Called"<<endl;  
        this->health = temp.health;
        this->level = temp.level;
    } 

    void print(){
        cout<<"Level : "<<level<<endl;
        cout<<"Level : "<<health<<endl;
    }

    int getHealth(){ 
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health  = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    // static function : it can access only static member
    static int random(){
        return timeToComplete;
    }

    // Destructor
    ~Hero(){
        cout<<"Destructor Called"<<endl;
    }

};

    // initialisation of static keyword
    int Hero::timeToComplete = 5;


int main(){

    cout<<Hero::random()<<endl;



/*
// Accessing without creating the object (// recommended)
    cout<<Hero::timeToComplete<<endl;

    Hero a;
    cout<<a.timeToComplete<<endl;

    Hero b;
    b.timeToComplete = 10;
    cout<<b.timeToComplete<<endl;
    cout<<a.timeToComplete<<endl; // static keyword belongs to the class not the object
*/


/*
     // static 
    Hero a;

    // Dynamically
    Hero *b = new Hero();
    // Manually Destructor Call
    delete b;
*/


/*
    Hero S(70, 'C');
    S.print();

    // copy constructor
    Hero R(S);
    R.print();
*/

/*  
    Hero obj(30, 'C');
    cout<<"Address of obj is : "<<&obj<<endl;
    obj.print();
*/

/*
    // static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout<<"level is : "<<a.getLevel()<<endl;
    cout<<"health is : "<<a.getHealth()<<endl;

    // Dynamically
    Hero *b = new Hero;
    b->setHealth(70);
    b->setLevel('A');
    cout<<"level is : "<<(*b).getLevel()<<endl;
    cout<<"health is : "<<(*b).getHealth()<<endl;

    cout<<"level is : "<<b->getLevel()<<endl;
    cout<<"health is : "<<b->getHealth()<<endl;
*/
    return 0;
}