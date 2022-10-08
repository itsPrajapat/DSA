// CHECK IF A NUMBER IS PRIME OR NOT

/* #include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int i;

    for(i=2; i<=(n-1); i++)
    {
        if(n%i==0){
            cout<<"non prime";
            break;
        }
    }
    if(i==n){
        cout<<"prime";
    }

    return 0;
} */


/* #include<iostream>
#include<cmath>         // this header file is for sqrt
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    bool flag=0;

     for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0){
            cout<<"non prime";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"prime";
    }
    return 0;
} */




//*****REVERSE A GIVEN NUMBER n **********
// for example 1234 --> 4321

/* #include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int reverse=0;

    while(n>0)
    {
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n = n/10;
    }

    cout<<reverse<<endl;

    return 0;
} */  



//**** CHECK IF A GIVEN NUMBER IS ARMSTRONG NUMBER OR NOT*****
 
/* #include<iostream>
#include<math.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int sum = 0;
    int originaln = n;
    
    while(n>0)
    {
      int lastdigit = n%10;
      sum = sum + pow(lastdigit,3);
      n = n/10;
    }
if(sum==originaln)
{
   cout<<"Armstrong Number"<<endl;
}
else
{
    cout<<"Not a Armstrong Number"<<endl;
}

    return 0;
}  */



//******* PRINTING ALL THE DIGITS OF A POSITIVE DECIMAL NUMBER FROM RIGHT TO LEFT ****

//  #include<iostream>
// using namespace std;

// int main(){
    
//     int n;
//     cin>>n;

//     while (n>0)
//     {
//         int rem = n%10;
//         cout<<rem<<endl;
//         n = n/10;
//     }

//     return 0;
// }




//****** CALCULATING FACTORIAL OF A NUMBER n ******

/* #include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int factorial = 1;

    for(int i=1; i<=n; i++){
        factorial *= i;
    }
    cout<<factorial;


    return 0;
} */





//********* PRINTING FIRST n OF FIBANACCI SERIES WITH STARTING TERM AS 0,1 ******

/* #include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    
   if(n==1){
       cout<<"0"<<endl;
   }
   else if (n==2)
   {
       cout<<"0"<<" "<<"1"<<endl;
   }
   else
   {
       int curr_f;
       int a=0;  
       int b=1;
       int i=3;

       cout<<a<<" "<<b<<" ";

       while(i<=n){
           curr_f = a+b;
           cout<<curr_f<<" ";
           a=b;
           b=curr_f;
           i++;
       }
       cout<<endl;
   }
   
    return 0;
}   */



//****** PROGRAM TO PRINT ASCII THE VALUE OF ANY GIVEN NUMBER ***

/* #include<iostream>
using namespace std;

int main(){
     
     char c;
     cin>>c;

     cout<<int(c);

    return 0;
}
 */



//*****PROGRAM TO DISPLAY ALL FACTORS OF A GIVEN NUMBER****

//  #include<iostream>
// using namespace std;

// int main(){
    
//     int n;
//     cin>>n;

//     for(int i=1; i<=n; i++)
//     {
//         if(n%i==0){
//             cout<<i<<endl;
//         }
//     }

//     return 0;
// } 












