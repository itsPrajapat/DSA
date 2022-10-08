#include<iostream>
#include<string>
using namespace std;

class laptop
{
    public :
    string name;
    string brand;
    float price;
    string processor;

    void getdata()
    {
        cout<<"Name : ";
        cin>>name;

        cout<<"Brand : ";
        cin>>brand;

        cout<<"Price : ";
        cin>>price;

        cout<<"Processor : ";
        cin>>processor;
    }

    void showdata()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Brand : "<<brand<<endl;
        cout<<"Price : "<<price<<endl;
        cout<<"Processor : "<<processor<<endl;
    }

      void startup()
      {
          cout<<"laptop "<<name<<" has started"<<endl;
      }

      void shutdown()
      {
          cout<<"laptop "<<name<<" is shutting down"<<endl;
      }

};


int main(){

    laptop laptop1;
    laptop1.getdata();
    laptop1.showdata();
    laptop1.startup();
    laptop1.shutdown();



    return 0;
}

