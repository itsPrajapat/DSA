#include<iostream>
using namespace std;

int main(){

    int a; //decalartion
    a=12;  //initialisation
    cout<<"size of int "<<sizeof(a)<<endl;

    float b;
    cout<<"size of float "<<sizeof(b)<<endl;

    char c;
    cout<<"size of char "<<sizeof(c)<<endl;

    bool d;
    cout<<"size of bool "<<sizeof(d)<<endl;


    short int si;
    long int li;
    cout<<"size of short int "<<sizeof(si)<<endl;
    cout<<"size of long int "<<sizeof(li)<<endl;

    return 0;
} 



// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main()
// {
//     int a = 3;
//     long long b = 12345678912345;
//     char c = 'a';
//     float d = 334.230;
//     double  e = 14049.30493000;

//     cout<<a<<endl;
//     cout<<b<<endl;
//     cout<<c<<endl;
//     cout<<fixed;
//     cout<<setprecision(3)<<d<<endl;
//     cout<<setprecision(4)<<e<<endl;

//     return 0;
// }
