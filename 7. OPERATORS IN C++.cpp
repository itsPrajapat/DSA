//  #include<iostream>
// using namespace std;

// int main(){

//     int i=1;

//         //1   //3
//     i = i++ + ++i;

//     cout<<i<<endl;
    
//     return 0;
// } 


/* #include<iostream>
using namespace std;

int main(){
    
    int i=1;
    int j=2;
    int k;
        //1 //2 //1   //2   //3   //4   
    k = i + j + i++ + j++ + ++i + ++j;

    cout<<i<<" "<<j<<" "<<k<<endl;

    return 0;
}  */



 /* #include<iostream>
using namespace std;

int main(){
    
    int i=0;
        //0   //0   //1   //1
    i = i++ - --i + ++i - i--;

    cout<<i<<endl;

    return 0;
}  */


/* #include<iostream>
using namespace std;

int main(){
    
    int i=1 , j=2 , k=3;

            //1   //2   //3
    int m = i-- - j-- - k--;

    cout<<i<<endl; //0
    cout<<j<<endl; //1
    cout<<k<<endl; //2
    cout<<m<<endl;

    return 0;
}  */



/* #include<iostream>
using namespace std;

int main(){
    
    int i=10, j=20, k;

        //10  //9   //19  //20  //9   //20  //10  //19
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout<<i<<endl; //10
    cout<<j<<endl; //20
    cout<<k<<endl; //-20

    return 0;
}  */


// write a program to output whether is a number is divisible by both 2 and 3 or divisible by only one of them 

/* #include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    if(n%2==0 && n%3==0)
    {
        cout<<"divisible by both"<<endl;
    }
    else if(n%2==0)
    {
        cout<<"divisible by only 2"<<endl;
    }
    else if(n%3==0)
    {
        cout<<"divisible by only 3"<<endl;
    }
    else
    {
        cout<<"divisible by none of them"<<endl;
    }

    return 0;
}  */




 
