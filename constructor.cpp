/* #include<iostream>
#include<string>
using namespace std;

class laptop
{
    public :
    string name;
    float price;

    laptop()
    {
        name = "acer";
        price = 100.0;
        cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
    }
   
};

int main(){
   
    laptop l;
    
    return 0;
} */




//******parametrise constructor********

/* #include<iostream>
#include<string>
using namespace std;

class laptop
{
    public :
    string name;
    float price;

    laptop()
    {
        cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
    }

    laptop(string lname, float lprice)
    {
        name = lname;
        price = lprice;
        cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;

    }
   
};

int main(){
   
    laptop l;
    laptop m("Acer", 100.00);
    
    return 0;
} */




//***************COPY CONSTRUCTOR*********



/* #include<iostream>
#include<string>
using namespace std;

class laptop
{
    public :
    string name;
    float price;

    laptop()
    {
        cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
    }

    laptop(string lname, float lprice)
    {
        name = lname;
        price = lprice;
        cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
    }

    laptop(const laptop &p)
    {
        name = p.name;
        price = p.price+100.5;
        cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
    }
   
};

int main(){
   
    laptop l;
    laptop m("Acer", 100.00);
    laptop k = m;
    
    return 0;
} */




//***********DESTRUCTOR*****

 #include<iostream>
#include<string>
using namespace std;

class laptop
{
    public :
    string name;
    float price;

    laptop()
    {
        cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
    }

    laptop(string lname, float lprice)
    {
        name = lname;
        price = lprice;
        cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
    }

    laptop(const laptop &p)
    {
        name = p.name;
        price = p.price+100.5;
        cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
    }
    ~laptop()           // ~ this is the sign of destructor
    {
        cout<<"Destructing "<<price<<endl;
    }
   
};

int main(){
   
    laptop l;
    laptop m("Acer", 100.00);
    laptop k = m;
    
    return 0;
} 


