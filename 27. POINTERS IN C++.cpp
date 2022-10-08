//*** Pointers are variable that store the address of other variable ***

 #include<iostream>
using namespace std;

int main(){

    int a=10;
    int* aptr;

    aptr = &a;   // "&" it is the operator which store the address of variable 

    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<&aptr<<endl;

    cout<<*aptr<<endl;

    return 0;
} 




/* #include<iostream>
using namespace std;

int main(){
    
    int a=10;
    int* aptr = &a;

    cout<<aptr<<endl;
    cout<<*aptr<<endl;
    cout<<a<<endl;

    *aptr = 20;
    cout<<a<<endl;


    return 0;
} */



//*** POINTER ARITHEMATIC ***

// for integer

/* 
#include<iostream>
using namespace std;

int main(){
    
    int a=10;
    int* aptr = &a;

    cout<<aptr<<endl;

    aptr++;
    cout<<aptr<<endl;

    return 0;
} */



// for character

/* #include<iostream>
using namespace std;

int main(){
    
    char ch = 'a';
    char* cptr = &ch;

    cout<<cptr<<endl;

    cptr++;
    cout<<cptr<<endl;

    return 0;
} */



//*** POINTERS AND ARRAYS ***

/*  #include<iostream>
using namespace std;

int main(){
    
    int arr[] = {10,20,30};
    cout<<*arr<<endl;

     int* ptr = arr;
    for(int i=0; i<3; i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    } 

    return 0;
} */


/* 
#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {10,20,30};

    int* ptr = arr;
    for(int i=0; i<3; i++)
    {
        cout<<*(arr+i)<<endl;
    }
    return 0;
} */




//*** POINTER TO POINTER ***

/* #include<iostream>
using namespace std;

int main(){
    
    int a=10;
    int* p;
    p = &a;

    cout<<*p<<endl;


    int** q;
    q =  &p;
    
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;
    return 0;
} */



//*** PASSING POINTERS TO FUNCTION ***

/* #include<iostream>
using namespace std;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    int a=2; 
    int b=4;

    swap(a,b);
    cout<<a<<" "<<b<<endl;    
// yahan pe a and b ki value swap nhi hogi bcoz void function me a and b ki value ja rhi h na ki a and b ja rhe hai jo void funcion 
// me a and b hai wo main function k a and b se alag hai ise hum call by value kehte hai so swap krne k liye hume pointer ki help
// leni pdegii jo  a and b ka address send krenge void function me ise hum call by reference kehte hai
    
    return 0;
} */



// ise call by reference kehte hai jisme actual m variable ja rhe hote hai and call by value m variable ki value ja rhi hoti

/* #include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    
    int a=2;
    int b=4;

    int* aptr = &a;
    int* bptr = &b;

    swap(aptr,bptr);
    cout<<a<<" "<<b<<endl;
    return 0;
} */


