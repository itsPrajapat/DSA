

//*********INTEGER FUNCTION**********

/* #include<iostream>
using namespace std;

int factorial(int no){
    int ans=1;
    for (int i=no; i>0; i--)
    {
        ans = ans*i; 
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter n for factorial"<<endl;
    cin>>n;
    cout<<"factorial of n is: "<<factorial(n)<<endl;

    
    return 0;
}  */





//**********FLOAT FUNCTION*********

/* #include<iostream>
using namespace std;

float division(float dividend, float divisor)
{
    float ans = dividend/divisor;
    return ans;
}

int main(){
    float dividend, divisor;
    cout<<"enter dividend :";
    cin>>dividend;
      cout<<"enter divisor :";
    cin>>divisor;

    cout<<dividend<<"/"<<divisor<<" : "<<division( dividend, divisor)<<endl;

    return 0;
} */



//************CHARACER FUNCTION********


/* #include<iostream>
using namespace std;


char firstcap(char arr[10], int n){
    for(int i=0; i<n; i++){
        if(arr[i]>='A' && arr[i]<='Z')
        return arr[i];
    }
}


int main(){
    int n=10;
    char arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"first capital character is :"<<firstcap(arr,n)<<endl;
   
    return 0;
}  */


//***********bool functions***********


/* #include<iostream>
using namespace std;

bool isprime(int n){

    if(n<=2){
        return true;
    }
    for (int i=2; i*i<n; i++)
    {
       if((n%i)==0)
       return false;
    }

    return true;  
}



int main(){
    int n;
    cout<<"enter number to be checked :"<<endl;
    cin>>n;

    if(isprime(n))
    {
        cout<<n<<" is a prime number"<<endl;
    }
    else
    {
        cout<<n<<" is not a prime number"<<endl;
    }
    
    return 0;
}  */



