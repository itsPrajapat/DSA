// MULTIPLE LANGUAGE ROBOT

/* #include<iostream>
using namespace std;

int main(){

    char button;
    cin>>button;

    if(button=='a')
    {
        cout<<"HELLO"<<endl;
    }    
    else if(button=='b')
    {
        cout<<"namaste"<<endl;
    }  
    else if(button=='c')
    {
        cout<<"salute"<<endl;
    }    
    else if(button=='d')
    {
        cout<<"hola"<<endl;
    }      
    else if(button=='e')
    {
        cout<<"ciao"<<endl;
    }    
    else
    {
        cout<<"i am still learning more"<<endl;
    }    
    
    return 0;
}  */


//NOW BY USING SWITCH CASE STATEMENT

/* #include<iostream>
using namespace std;

int main(){

    char button;
    cin>>button;

    switch (button)
    {
case 'a':
    cout<<"hello"<<endl;
    break;
case 'b':
    cout<<"namaste"<<endl;
    break;
case 'c':
    cout<<"salute"<<endl;
    break; 
case 'd':
    cout<<"hola"<<endl;
    break;
case 'e':
    cout<<"ciao"<<endl;
    break;           

    
    default:
    cout<<"i am still learning more"<<endl;
        break;
    }

    return 0;
}   */



//IMPLEMENT A SIMPLE CALCULATOR USING SWITCH

/* #include<iostream>
using namespace std;

int main(){
    
    int n1,n2;
    cin>>n1>>n2;

    char op;
    cin>>op;

    switch(op)
    {
        case '+' :
        cout<<n1+n2<<endl;
        break;

        case '-' :
        cout<<n1-n2<<endl;
        break;

        case '*' :
        cout<<n1*n2<<endl;
        break;

        case '/' :
        cout<<n1/n2<<endl;
        break;


        default:
        cout<<"enter another operator"<<endl;
        break;
    }

    return 0;
}    */


// WRITE A PROGRAM TO FIND WHETHER AN ALPHABET IS A VOWEL OR A CONSONANT

/* #include<iostream>
using namespace std;

int main(){
    
    char alphabet;
    cin>>alphabet;

    switch(alphabet)
    {
        case 'a':
        cout<<"VOWEL"<<endl;
        break;

        case 'e':
        cout<<"VOWEL"<<endl;
        break;

        case 'i':
        cout<<"VOWEL"<<endl;
        break;

        case 'o':
        cout<<"VOWEL"<<endl;
        break;

        case 'u':
        cout<<"VOWEL"<<endl;
        break;

        default :
        cout<<"CONSONANT"<<endl;
        break;
    }

    return 0;
}   */


 

 //*****Q.
 /* #include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(1<=n && n<=9)
    {
        switch(n)
        {
            case 1 :
            cout<<"one"<<endl;
            break;

              case 2 :
            cout<<"two"<<endl;
            break;

              case 3 :
            cout<<"three"<<endl;
            break;

              case 4 :
            cout<<"four"<<endl;
            break;

              case 5 :
            cout<<"five"<<endl;
            break;

              case 6 :
            cout<<"six"<<endl;
            break;

              case 7 :
            cout<<"seven"<<endl;
            break;

              case 8 :
            cout<<"eight"<<endl;
            break;

              case 9 :
            cout<<"nine"<<endl;
            break;
        }
    }

    else
    {
        cout<<"greater than 9"<<endl;
    }

    return 0;
} */