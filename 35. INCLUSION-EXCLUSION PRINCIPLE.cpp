// if  20(n1) students in a class have math and 50(n2) students have biology and 10(n3) students have both math and biology then 
// total number of students in the class is: N = n1 + n2 - n3 . This is the inclusion-exclusion principle.





 
// Q.1 How many numbers between 1 and 1000 are divisible by 5 or 7

#include<iostream>
using namespace std;

int divisible(int n, int a, int b)
{
    int c1 = n/a;
    int c2 = n/b;

    int c3 = n/(a*b);

    return c1+c2-c3;
}

int main(){

    int n , a, b;
    cin>>n>>a>>b;

    cout<<divisible(n, a, b);
    
   
    return 0;
} 





//******EUCLID ALGORITHM TO FIND GCD(greatest common divisor)**
/* 
#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    while(b != 0)
    {
        int rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}

int main(){

    int a , b;
    cin>>a>>b;

    cout<<gcd(a,b);
    
    return 0;
} */







