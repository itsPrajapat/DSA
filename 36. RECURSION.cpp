//** Sum till n **

/* #include<iostream>
using namespace std;

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }

    int prevsum = sum(n-1);
    return n + prevsum;
}

int main(){

    int n;
    cin>>n;

    cout<<sum(n)<<endl;
    
    return 0;
} */







//*** Calculate n raised to power of p ***

// #include<iostream>
// using namespace std;

// int power(int n, int p)
// {
//     if(p==0)
//     {
//         return 1;
//     }

//     int prevpower = power(n, p-1);

//     return n*prevpower;
// }

// int main(){

//    int n;
//    cin>>n;

//    int p;
//    cin>>p;
    
//     cout<<power(n, p)<<endl;

//     return 0;
// } 





//*** Find the factorial of a number n ***
/* 
#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }

    int prevfactorial = factorial(n-1);

    return n*prevfactorial;
}

int main(){

    int n;
    cin>>n;

    cout<<factorial(n)<<endl;
    
    return 0;
} */





//*** Print the nth Fibonacci number ***

/* #include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    
    int n;
    cin>>n;
    
   cout<<fibonacci(n)<<endl;

    return 0;
} */


// minor changes in above Question
/* 
#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n==0 || (n==1))
    {
        return n;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    
    int n;
    cin>>n;
    
   cout<<fibonacci(n)<<endl;

    return 0;
} */



