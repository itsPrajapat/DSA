/*#include<iostream>
using namespace std;

void pattern(){
    int n;
    cout<<"enter no. of rows : ";
    cin>>n;

    for(int i=0; i<n; i++){

        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){

    pattern();
    pattern();
    pattern();
    pattern();
            
    return 0;
} */





/* #include<iostream>
using namespace std;

int pow(int no, int po)
{
    int ans=1;
    for(int i=0; i<po; i++){
        ans = ans*no;
    }
    return ans;
}

int main(){
    int n,p;
    cout<<"Enter no. : ";
    cin>>n;
    cout<<"Enter power : ";
    cin>>p;
    cout<<"Answer is :"<<pow(n,p)<<endl;
    
    return 0;
} */





#include<iostream>
using namespace std;

int pow(int no, int po = 2)   // yahan pe humne pehle se hi p(po) ki value fix krdi hai to hume p lene ki koi jarurt nhi h or agar hum 
{                             // p ki kuch value lete bhi hai to bhi y 2 hi manega
    int ans=1;
    for(int i=0; i<po; i++){
        ans = ans*no;
    }
    return ans;
}

int main(){
    int n,p;
    cout<<"Enter no. : ";
    cin>>n;
    cout<<"Enter power : ";
    cin>>p;
    cout<<"Answer is :"<<pow(n)<<endl;
    
    return 0;
} 