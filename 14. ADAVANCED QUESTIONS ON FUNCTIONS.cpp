// sum of first n natural no.

/* #include<iostream>
using namespace std;

int sum(int n)
{
    int ans=0;
    for(int i=1; i<=n; i++){
        ans += i;
    }
    return ans;
}

int main(){
    int n; 
    cin>>n; 

    cout<<sum(n); 

    return 0;
} */


// check whether a given triplet is phytagorian triplet or not 

/* #include<iostream>
using namespace std;

bool check(int x, int y, int z)
{
    int a = max(x, max(y,z));
    int b;
    int c;

    if(a==x){
        b=y;
        c=z;
    }
    else  if(a==y){
        b=x;
        c=z;
    }
    else
    {
        b=y;
        c=x;
    }

    if(a*a == b*b + c*c){
        return true;
    }
    else
    {
        return false;
    }
       
}

int main(){
    
    int x,y,z;
    cin>>x>>y>>z;

    if(check(x,y,z))
    {
      cout<<"phytagorian triplet";
    }
    else
    {
        cout<<"not a phytagorian triplet";
    }
    return 0;
}
 */



//**************** CONVERSION QUESTIONS ********

// (1) BINARY TO DECIMAL

// #include<iostream>
// using namespace std;

// int BinaryTodecimal(int n)
// {
//     int ans=0;
//     int x=1;

//     while(n>0)
//     {
//         int y = n%10;
//         ans = ans + x*y;
//         x = x*2;
//         n = n/10;
//     }
//     return ans;
// }

// int main(){
    
//     int n;
//     cin>>n;

//  cout<<BinaryTodecimal(n)<<endl;

//     return 0;
// } 



// (2) OCTAL TO DECIMAL

/*  #include<iostream>
using namespace std;

int octalTodecimal(int n)
{
    int ans=0;
    int x=1;

    while(n>0)
    {
        int y = n%10;
        ans = ans + x*y;
        x = x*8;
        n = n/10;
    }
    return ans;
}

int main(){
    
    int n;
    cin>>n;

 cout<<octalTodecimal(n)<<endl;

    return 0;
}
 */



// DEFINE A FUNCTION THAT RETURNS THE PRODUCT OF TWO NUMBERS ENTERED BY USERS

/* #include<iostream>
using namespace std;

int multiplication(int a, int b)
{
    int ans = a*b;
    return ans;
}
int main(){
    
    int a,b;
    cin>>a>>b;
     cout<<multiplication(a,b)<<endl;

    return 0;
} */




// WRITE A PROGRAM TO PRINT THE CIRCUMFERENCE AND AREA OF A CIRCLE OF RADIUS ENTERED BY USER BY DEFINING YOUR OWN FUNCTION

/* #include<iostream>
using namespace std;

void circle(int r)
{
    cout<<"perimeter is "<<2*3.14*r<<endl;
    cout<<"Area is "<<3.14*r*r<<endl;

    return;
}

int main(){
    
    int r;
    cin>>r;
 
 circle(r);

    return 0;
} */



// DEFINE TWO FUNCTIONS TO PRINT THE MAXIMUM AND THE MINIMUM NUMBER RESPECTIVELY AMONG THREE NUMBERS ENTERED BY USER

/* #include<iostream>
using namespace std;

void maximum(int x, int y, int z)
{
    int a = max(x, max(y,z));
    cout<<"Maximum is :"<<" "<<a<<endl;
}
void minimum(int x, int y, int z)
{
    int b = min(x, min(y,z));
    cout<<"Minimum is :"<<" "<<b<<endl;
}

int main(){
    
    int x,y,z;
    cin>>x>>y>>z;
  
  maximum(x,y,z);
  minimum(x,y,z);

    return 0;
} */



// DEFINE A PROGRAM TO FIND OUT WHETHER A GIVEN NUMBER IS EVEN OR ODD

/* #include<iostream>
using namespace std;

void check(int n)
{
    if(n%2==0)
    {
        cout<<"EVEN"<<endl;
    }
    else
    {
        cout<<"ODD"<<endl;
    }
    return ;
    
}

int main(){
    
    int n;
    cin>>n;

    check(n);

    return 0;
} */



// A PERSON IS ELIGIBLE TO VOTE IF HIS/HER AG EIS GREATER THAN OR EQUAL TO 18. DEFINE A FUNCTION TO FIND OUT IF HE/SHE IS ELIGIBLE 
// TO VOTE

/* #include<iostream>
using namespace std;

void check(int age)
{
    if(age>=18){
        cout<<"ELIGIBLE"<<endl;
    }
    else
    {
        cout<<"NOT ELIGIBLE"<<endl;
    }
    
}

int main(){
    
    int age;
    cin>>age;

      check(age);

    return 0;
}
 */


//  DEFINE A FUNCTION IS PRIME OR NOT 

/* #include<iostream>
using namespace std;

bool prime(int n)
{
    
    for(int i=2; i<n; i++)
    {
        if(n%i==0){
            return false;
        }
    }
   return true;
}

int main(){
    
    int n;
    cin>>n;
    
    cout<<prime(n);
    
    
    return 0;
} */



