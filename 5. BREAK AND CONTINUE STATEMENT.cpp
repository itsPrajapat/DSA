// continue statement is uesd to skip to the next iternation of the loop
// break statement is used to terminate the loop 


//*****we are allow to go out only on odd date****

//  #include<iostream>
// using namespace std;

// int main(){

//      for (int date = 1; date<=30; date++)
//      {
//         if(date%2 == 0){
//             continue;
//         }
//         cout<<date<<" Go Out Today"<<endl;
//      }
        
//    return 0;
// }  



//****POCKET MONEY BHI HONI CHAIYE BAHAR JANE K LIYE******

// #include<iostream>
// using namespace std;

// int main(){
    
//     int pocketmoney = 3000;

//     for(int date=1; date<=30; date++)
//     {
//         if(date%2 == 0){
//             continue;
//         }
//         if(pocketmoney == 0){
//             cout<<"Break";
//             break;
//         }
//         cout<<"Go Out Today"<<endl;
//         pocketmoney = pocketmoney-300;       
//     }

//     return 0;
// }  



//*******QUESTIONS*********

// (1) write a program to print the no. from 1 to 100 and skip the no. which is divisible from 3

/* #include<iostream>
using namespace std;

int main(){
    
    for(int i=1; i<=100; i++)
    {
        if(i%3 == 0){
            continue;
        }
        cout<<i<<endl;
    }
    
    return 0;
}  */


// (2) check if a number is prime or not 

  /* #include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int i;

    for(i=2; i<=(n-1); i++)
    {
        if(n%i == 0){
            cout<<"Non Prime"<<endl;
            break;
        }
    }
    if(i==n){
    cout<<"Prime"<<endl;
    }

    return 0;
}  */


// (3) PRINT ALL PRIME NUMBERS BETWEEN a and b

/*  #include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    for(int num=a; num<=b; num++)
    {
        int i;
        for(i=2; i<num; i++){
            if(num%i == 0){
                break;
            }
        }
        if(i==num){
            cout<<num<<endl;
        }
    }
    return 0;
}       */