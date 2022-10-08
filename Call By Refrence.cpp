#include<iostream>
using namespace std;

void change(int &no)
{
    no=no*no;
    cout<<" value in function : "<<no<<endl;
}

int main(){
    int n;
    cout<<"enter value : "<<endl;
    cin>>n;
    change(n);
    
    cout<<" value in main :"<<n<<endl;

    return 0;
}