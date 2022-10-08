/* (1)     1 2 3 4 5
           1 2 3 4
           1 2 3
           1 2
           1  */

/* #include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(n-i+1); j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
} */




/* (2)  1
        0 1
        1 0 1
        0 1 0 1
        1 0 1 0 1    */

/* #include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
      for(int j=1; j<=i; j++){

          if((i%2)==0 && (j%2)==0){
              cout<<"1";
          }
          else if((i%2)!=0 && (j%2)!=0){
              cout<<"1";
          }
          else
          {
              cout<<"0";
          }      
      }
      cout<<endl;     
    }

    return 0;
}  */


/* (3)           * * * * *
                * * * * *
               * * * * *
              * * * * *
             * * * * *        */

/* #include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        int space = n-i;
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        for(int j=1; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
} */



/* (4)          1
               1 2
              1 2 3
             1 2 3 4
            1 2 3 4 5    */

/* #include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(n-i); j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
} */


/* (5)            1
                2 1 2
              3 2 1 2 3
            4 3 2 1 2 3 4
          5 4 3 2 1 2 3 4 5     */

/* #include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
        int k=i;
        for(int j=1; j<=i; j++){
            cout<<k;
            k--;
        }
        int x=2;
        for(int j=1; j<=(i-1); j++){
            cout<<x;
            x++;
        }
        cout<<endl;
    }

    return 0;
} */



/* (5)            *
                * * *
              * * * * *
            * * * * * * *
            * * * * * * *
              * * * * *
                * * *
                  *              */
 /* 
 #include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=(2*i-1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=(2*i-1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}   
 */

/* (6)      *      *
          *   *  *   *
         *     *      *    */
/* 
#include<iostream>
using namespace std;

int main(){
    
    

    for(int i=1; i<=3; i++)
    {
        for (int j=1; j<=9; j++){
            if((i==1 || i==3) && (i+j)%4==0){
                cout<<"*";
            }
            else if ((i==2) && (i+j)%2==0)
            {
              cout<<"*";
            }
            else
            {
                cout<<" ";
            }
           
        }
        cout<<endl;
        
    }


    return 0;
}


 */
 


 /*  (7)           *
                  * *
                 *   *
                *     *
               *       *
               *       *
                *     *
                 *   *
                  * *
                   *              */

/* #include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=(2*i-1); j++){
            if(j==1 || j==(2*i-1)){
            cout<<"*";         
        }
        else{
            cout<<" ";
        }
        }
        cout<<endl;
    }


    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=(2*i-1); j++){
            if(j==1 || j==(2*i-1)){
            cout<<"*";         
        }
        else{
            cout<<" ";
        }
        }
        cout<<endl;
    }
    return 0;
} */


/* (8)    *********
          **** ****
          ***   ***
          **     **
          *       *
          *       *
          **     **
          ***   ***
          **** ****
          *********           */

/* #include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(6-i); j++)
        {
          cout<<"*";
        }
        for(int j=1; j<=(2*i-1); j++){
            cout<<" ";
        }
        for(int j=1; j<=(6-i); j++){
            cout<<"*";
        }
        cout<<endl;
    }

       for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=(6-i); j++)
        {
          cout<<"*";
        }
        for(int j=1; j<=(2*i-1); j++){
            cout<<" ";
        }
        for(int j=1; j<=(6-i); j++){
            cout<<"*";
        }
        cout<<endl;
    } 
    
    return 0;
}  */





/* (9)        *****
             *   *
            *   *
           *   *
          *****     */

/* #include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
      for(int j=1; j<=(n-i); j++)
      {
          cout<<" ";
      }
      for(int j=1; j<=n; j++)
      {
          if((i==1) || (i==n)){
              cout<<"*";
          }
          else if((j==1) || (j==n)){
              cout<<"*";
          }
          else
          {
              cout<<" ";
          }
          
      }
      cout<<endl;
      
    }

    return 0;
} */


  /* (10)         *        *
                  **      **
                  * *    * *
                  *  *  *  *
                  *   **   * 
                  *   **   *
                  *  *  *  *
                  * *    * *
                  **      **
                  *        *           */

/* #include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if((j==1) || (j==i)){
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }       
        }
        for(int j=1; j<=(2*n-2*i); j++){
           cout<<" ";
        }
        for(int j=1; j<=i; j++){
            if((j==1) || (j==i)){
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }


    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            if((j==1) || (j==i)){
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }       
        }
        for(int j=1; j<=(2*n-2*i); j++){
           cout<<" ";
        }
        for(int j=1; j<=i; j++){
            if((j==1) || (j==i)){
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }

    return 0;
} */






