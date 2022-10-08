// PRINT ALL PRIME NUMBERS BETWEEN 2 GIVEN NUMBERS 

/* #include<iostream>
#include<cmath>
using namespace std;

bool isprime(int num)
{
    for(int i=2; i<=sqrt(num); i++){
     
     if(num%i==0){
      return false;
     }
    }
    return true;
}

int main(){

    int a,b;
    cin>>a>>b;

    for (int i = a; i <=b; i++)
    {
       if (isprime(i)==true)  // we also can write if(isprime(i)) bcoz jo bhi if m hota hai wo use apne aap hi true manta hai 
       {
        cout<<i<<endl;
       }
       
    }  
    return 0;
} */



// PRINT THE FIBANOCCI SERIES USING FUNCTIONS

/* #include<iostream>
using namespace std;

void fibanocci(int num){
    if (num==1)
    {
       cout<<"0";
    }
   else if (num==2)
    {
        cout<<"0 "<<"1";
    }
    else
    {
        int a=0;
        int b=1;
        int curr_f;
        int i=3;

        cout<<a<<" "<<b<<" ";

        while (i<=num)
        {
           curr_f = a+b;
           cout<<curr_f<<" ";
           a = b;
           b = curr_f;
           i++;
        }
        
    }
    return ;    
}

int main(){

    int n;
    cin>>n;

    fibanocci(n);
    
    return 0;
} */


// OTHER METHOD


/* #include<iostream>
using namespace std;

void fibanocii(int n)
{
    int t1=0;
    int t2=1;
    int nextterm;

    for(int i=1; i<=n; i++){
        cout<<t1<<endl;
        nextterm = t1 + t2;
        t1=t2;
        t2 = nextterm;
    }
    return;
}

int main(){
    
    int n;
    cin>>n;

    fibanocii(n);
    return 0;
} */



// CALCULATE THE FACTORIAL OF GIVEN NUMBER BY USING FUNCTIONS

/* #include<iostream>
using namespace std;

int factorial(int n)
{
   int ans=1;
   for (int i = 1; i <= n; i++)
   {
       ans *= i;
   }
   return ans;
      
}

int main(){
    
    int n;
    cin>>n;

    cout<<factorial(n)<<endl;
    return 0;
} */



// CALCULATE nCr 

/* #include<iostream>
using namespace std;

int fact(int n)
{
    int factorial =1;
    for(int i=1; i<=n; i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
    
    int n,r;
    cin>>n>>r;

    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans;


    return 0;
} */



/* PASCAL TRIANGLE

/*  1
    1 1
    1 2 1
    1 3 3 1
    1 4 6 4 1  */

/* #include<iostream>
using namespace std;

int fact(int n)
{
    int factorial =1;
    for(int i=1; i<=n; i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
} */



// WRITE A PROGRAM TO FIND OUT WHETHER A GIVEN NO. IS EVEN OR ODD USING FUNCTIONS

/* #include<iostream>
using namespace std;

void rahul(int n){
    if(n%2==0){
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
    return ;
}

int main(){
    
    int n;
    cin>>n;

    rahul(n);
    return 0;
} */



// WRITE A PROGRAM USING FUNCTION TO CHECK IF A PERSON IS ELIGIBLE FOR VOTING OR NOT BY COMPARING HIS AGE WITH LEGAL VOTING AGE i.e.18

/* #include<iostream>
using namespace std;

void print(int age){
    if(age>=18){
        cout<<"eligible";      
    }
else
{
    cout<<"not eligible";
}
  return;
}

int main(){
    
    int n;
    cin>>n;

print(n);

    return 0;
} */