//*************QUESTIONS*********

/* (1)  * * * *
        * * * *
        * * * *
        * * * *
        * * * *   */
     

 /*  #include<iostream>
using namespace std;

int main(){

    int row;
    int column;
    cin>>row;
    cin>>column;
     
     for(int i=1; i<=row; i++)
     {
         for(int j=1; j<=column; j++){
             cout<<"*"<<" ";
         }
         cout<<endl;
     }
     
    return 0;
}      */



/* (2)  * * * *
        *     *
        *     *
        *     *
        * * * *    */

/* #include<iostream>
using namespace std;

int main(){
    
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=4; j++)
        {
            if((i==1) || (i==5) || (j==1) || (j==4)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}   */



/*  (3)  * * * * * 
         * * * *
         * * *
         * *
         *    */

/* #include<iostream>
using namespace std;

int main(){
    
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            if(j>(6-i)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    
    return 0;
}   */

/* (4)                     *
                         * *
                       * * *
                     * * * *
                   * * * * *     */

/* #include<iostream>
using namespace std;

int main(){
    
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            if(j<=(5-i)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    

    return 0;
}     */


/*  (5)  1
         2 2
         3 3 3
         4 4 4 4
         5 5 5 5 5   */

/* #include<iostream>
using namespace std;

int main(){
    
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
           if(j<=i){
               cout<<i;
           } 
           else{
               cout<<" ";
           }
        }
        cout<<endl;
    }

    return 0;
}         */

/* (6)  1
        2 3
        4 5 6
        7 8 9 10
        11 12 13 14 15  */

/* #include<iostream>
using namespace std;

int main(){
             int count=1;
     for(int i=1; i<=5; i++)
    {       
        for(int j=1; j<=i; j++)
        {
         cout<<count<<" ";
         count++;
        }
        cout<<endl;
    }
    return 0; 
}         */


/* (6)   *             *
         * *         * *
         * * *     * * *
         * * * * * * * *
         * * * * * * * *
         * * *     * * *
         * *         * * 
         *             *  */

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        int space = 2*n-2*i;
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

        for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        int space = 2*n-2*i;
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}        
         


                   




 
