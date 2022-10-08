// #include<iostream>
// using namespace std;

// int main(){

//     int savings;
//     cin>>savings;

//     if(savings>5000)
//     {
//         cout<<"Neha"<<endl;
//     }
//     else
//     {
//         cout<<"Rashmi"<<endl;
//     }
     
//     return 0;
// } 



// #include<iostream>
// using namespace std;

// int main(){

//     int savings;
//     cin>>savings;

//     if(savings>5000)
//     {
//         cout<<"Neha"<<endl;
//     }
//      else if(savings>2000)
//      {
//          cout<<"Rashmi"<<endl;
//      }
//     else
//     {
//         cout<<"Friends"<<endl;
//     }
    
//     return 0;
// }  



//******NESTED IF ELSE STATEMENT****

// #include<iostream>
// using namespace std;

// int main(){

//     int savings;
//     cin>>savings;

//     if(savings>5000)
//     {
//         if(savings>10000){
//             cout<<"Roadtrip with Neha"<<endl;
//         }
//         else{
//             cout<<"Shopping with Neha"<<endl;
//         }
//     }
//      else if(savings>2000)
//      {
//          cout<<"Rashmi"<<endl;
//      }
//     else
//     {
//         cout<<"Friends"<<endl;
//     }
    
    
//     return 0;
// }  




//****QUESTIONS*********

/* // (1) MAX. OF THREE NUMBERS

#include<iostream>
using namespace std;

int main(){
    
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b)
    {
        if(a>c){
            cout<<"a is maximum"<<endl;
        }
        else{
            cout<<"c is maximum"<<endl;
        }
    }

    else
    {
        if(b>c){
            cout<<"b is maximum"<<endl;
        }
        else{
            cout<<"c is maximum"<<endl;
        }
    }

    return 0;
} */



/* // (2) IS A NO. EVEN OR ODD


#include<iostream>
using namespace std;

int main(){

      int a;
      cin>>a;

      if(a%2 == 0)    // % is a modulo operator
      {
          cout<<a<<"is even no."<<endl;
      }
      
      else
      {
          cout<<a<<" is odd no."<<endl;
      }
      

    
    return 0;
} */


 /* // (3) PROGRAM TO CHECK IF A TRIANGLE IS ISOSCELES , SCALENE OR EQUILATERAL.

#include<iostream>
using namespace std;

int main(){
    
    int a,b,c;
    cin>>a>>b>>c;

    if(a==b)
    {
        if(b==c){
            cout<<"triangle is equilateral"<<endl;
        }
        else{
            cout<<"triangle is isosceles"<<endl;
        }
    }

    else
    {
        if(b==c){
            cout<<"triangle is isosceles"<<endl;
        }
        else{
            cout<<"triangle is scalene"<<endl;
        }
    }


    return 0;
}   */





/* // (4) PROGRAM TO CHECK IF AN ALPHABET IS A VOWEL OR A CONSONANT

#include<iostream>
using namespace std;

int main(){
    
    char c;
    int isLowercaseVowel, isUppercaseVowel;
    cin>>c;

    isLowercaseVowel = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    isUppercaseVowel = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');

    if(isLowercaseVowel || isUppercaseVowel)
    {
        cout<<c<<" is a vowel"<<endl;
    }
    else
    {
        cout<<c<<" is a consonant"<<endl;
    }

    return 0;
}  */

