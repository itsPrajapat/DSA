
 #include<iostream>

using namespace std;

int main(){

// print nth term of an A.P. (Arithematic Progression) and sum of nth term of an A.P.
  /*  int a,n,d;
    cin>>a>>n>>d;

  int i;
int sum=0;
  for(i=1; i<=n; i++){
      sum=sum+(a+(n-1)*d);;
    
  }
  cout<<sum<<endl;

cout<<(a+(n-1)*d)<<endl; */


//*****pattern Questions******

/* (1)   *
         **
         ***
         ****
         ****    */


 /*  int n;
   cin>>n;

for(int i=1; i<=n; i++){

    for(int j=1; j<=i; j++){
        cout<<"*";
        
    }
    cout<<endl;

} */


/* (2)     *
          **
         ***
        ****
       *****    */

    /*  int n;
      cin>>n;

      for(int i=1; i<=n; i++)
      {    

    for(int j=1; j<=n; j++){
       
       if(j<=n-i)
       {
           cout<<" ";
       }
           else{
               cout<<"*";
           }
       
    }
       cout<<endl;
          
      }  */


/*   (3)  1
          22
          333
          4444
          55555    */


 /* int n;
      cin>>n;

      for(int i=1; i<=n; i++){

          for(int j=1; j<=i; j++ )
          {
              cout<<i;
          }
          cout<<endl;
      } */



      /* (4)   1
               2 3
               4 5 6
               7 8 9 10
               11 12 13 14 15   */


           /*    int n, k=1;
               cin>>n;

              for(int i=1; i<=n; i++)
              {
               for(int j=1; j<=i; j++) {
              
              cout<<k<<" ";
              k++;
                  
               } 
                cout<<endl;
              }  */





           /*   int n;
              cin>>n;

              for(int i=1,k=0; i<=n; i++ , k=0){

                for(int s=1; s<=n-i; s++){

                  cout<<" ";
                }

                while (k != (2*i)-1)
                {
                  cout<<"*";
                  k++;
                }
                
                cout<<endl;
              }  */



/* (6)    *
          **
          ***
          **
          *      */


     /*   int n; 
        cin>>n;

        for(int i=1; i<=n; i++){

          for(int j=1; j<=i; j++){

            cout<<"*";
          }
          cout<<endl;
        }

        for(int i=n-1; i>=1; i--){
         
         for(int j=1; j<=i; j++){
           cout<<"*";
         }
         cout<<endl;


        }  */







    /* (7)       *
                ***
               *****
                ***
                 *         */ 



           /*   int n;
              cin>>n;

              for(int i=1,k=0; i<=n; i++ , k=0){

                for(int s=1; s<=n-i; s++){

                  cout<<" ";
                }

                while (k != (2*i)-1)
                {
                  cout<<"*";
                  k++;
                }
                
                cout<<endl;
              }  

              for(int i=n-1,k=0; i>=1; i-- , k=0){

                for(int s=1; s<=n-i; s++){

                  cout<<" ";
                }

                while (k != (2*i)-1)
                {
                  cout<<"*";
                  k++;
                }
                
                cout<<endl;
              }    */



       /* (8)    * * * * *
                 *       *
                 *       *
                 *       * 
                 * * * * *       */


           /*    int n; 
                cin>>n;

                for(int i=1; i<=n; i++){

                  for(int j=1; j<=n; j++){

                    if((i==1) || (i==n) || (j==1) || (j==n)){
                      cout<<"*";
                    }
                    else{
                      cout<<" ";
                    }
                  }
                  cout<<endl;
                }       */




    /* (9)      * * * * *
                  * * * * 
                    * * *
                      * * 
                        *      */




  /*   int n;
    cin>>n;

    for(int i=i; i<=n; i++){
      
      for(int j=1; j<=n; j++){

        if(i-j>0){
          cout<<" ";
        }
        else{
          cout<<"*";
        }
      }
      cout<<endl;

    }     */






    /*   (10)    * * * * * 
                     * * * *
                         * * *
                             * *
                                *    */
                     

                  
           /*   int n;
              cin>>n;

              for(int i=1; i<=n; i++){

                for(int j=1; j<=(n+i-1); j++){
                  if(j<=(2*i-2)){
                    cout<<" ";
                  }
                  else{
                    cout<<"*";
                  }
                }
                cout<<endl;
              }      */



              /* (11)              *
                                  * *
                                 * * *
                                * * * *
                               * * * * *        */



    /*      int n;
          cin>>n;

          for (int i = 1; i<=n; i++)
          {
            for(int j=1; j<=n; j++){
              if(j<=(5-i)){
                cout<<" ";
              }
              else{
                cout<<"* ";
              }
            }
            cout<<endl;
          }           */





          /*  (12)             *  
                             * *
                           * * *
                         * * * *
                       * * * * *      
                         * * * *
                           * * *
                             * *
                               *        */




        /*      int n; 
              cin>>n;

              for(int i=1; i<=n; i++){

                for(int j=1; j<=n; j++){
                  if(j<=(n-i)){
                    cout<<" ";
                  }
                  else{
                    cout<<"*";
                  }
                }
                cout<<endl;
              }    


            for(int i=1; i<=(n-1); i++){

              for(int j=1; j<=n; j++){
                if(j<=i){
                  cout<<" ";
                }
                else{
                  cout<<"*";
                }
              }
              cout<<endl;
            }               */




            /*   (13)  * * *  * * * 
                       * *      * * 
                       *          *
                       
                       *          * 
                       * *      * *
                       * * *  * * *     */




                /*      int n;
                      cin>>n;



                      for(int i=1; i<=n; i++){

                        for(int j=1; j<=7; j++){

                          if(((j>4-i) && (j<4+i)) || (j==4)){
                          cout<<" ";
                        }
                        else{
                          cout<<"*";
                      }

                      
                      }
                      cout<<endl;
                      }

                      cout<<endl;

                      for(int i=1; i<=n; i++){

                        for(int j=1; j<=7; j++){
                           if(( j>i) && (j<=(7-i))){
                             cout<<" ";
                           }
                           else{
                             cout<<"*";
                           }
                        }
                        cout<<endl;
                      }           */





                      /*    (14)                 1
                                               1 2 3 
                                             1 2 3 4 5 
                                           1 2 3 4 5 6 7
                                         1 2 3 4 5 6 7 8 9   */




            /*    int n;
                cin>>n;

                for(int i=1; i<=n; i++){

                  for(int j=1; j<=(4+i); j++){
                  if(j<=5-i){
                    cout<<" ";
                    }
                    else{                    
                     cout<<(i+j-5);
                     
                    } 
                  }
                  cout<<endl;
                }              */





                /*    (15)                 1
                                         2 0 2
                                       3 0 0 0 3
                                     4 0 0 0 0 0 4
                                   5 0 0 0 0 0 0 0 5        */




                 /*         int n;
                          cin>>n;

                          for(int i=1; i<=n; i++){

                            for(int j=1; j<=(4+i); j++){

                              if(j<=(5-i)){
                                cout<<" ";
                              }
                              else{
                              if((j==(4+i)) || (j==(6-i))){
                                cout<<i;
                              }
                              else{
                                cout<<"0";
                              }

                              }
                              
                              
                            }
                            cout<<endl;
                          }                  */





            /*    (16)                           0
                                               9 0 9
                                             8 9 0 9 8
                                           7 8 9 0 9 8 7 
                                         6 7 8 9 0 9 8 7 6
                                       5 6 7 8 9 0 9 8 7 6 5
                                     4 5 6 7 8 9 0 9 8 7 6 5 4 
                                   3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 
                                 2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2 
                               1 2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2 1             */

                               
                             //  NOT COMPLETED YET


                           /*    int n;
                               cin>>n;

                              for(int i=1; i<=n; i++){
                                 for(int j=1; j<=n; j++){
                                   if(j==n){
                                     cout<<"0";
                                   }
                                   else if(j>=(n-i+1)){
                                     cout<<j;
                                   }
                                   else{
                                     cout<<" ";
                                   }
                                 }
                                

                                 for(int j=(n+1); j<=(n+9); j++){
                                   if(i==1){
                                     cout<<" ";
                                   }
                                   else if((j==(n+i-1))){
                                     cout<<(n-i+1);
                                   }
                                   else{
                                     cout<<" ";
                                   }
                                 }
                                 cout<<endl;

                               }   */


                        


                        /* (17)     *
                                    * *
                                    *   *
                                    *     *  
                                    * * * *         */
                             

                             /*     int n;
                                  cin>>n;

                                  for(int i=1; i<=n; i++){
                                   
                                   for(int j=1; j<=n; j++){
                                   
                                   if((j==1) || (i==n) || (j==i)){
                                     cout<<"*";
                                   }
                                   else{
                                     cout<<" ";
                                    }
                                   }
                                   cout<<endl;
                                  }            */      





                                  /*  (18)             *
                                                     * *
                                                   *   *
                                                 *     *
                                               * * * * *     */


                            /*              int n;
                                         cin>>n;

                                  for(int i=1; i<=n; i++){
                                   
                                   for(int j=1; j<=n; j++){

                                    
                                     if ((i==n) || (j==n) || (i+j==6)){
                                       cout<<"*";
                                     }
                                     else{
                                       cout<<" ";
                                     }
                                   
                                            

                                   }
                                   cout<<endl;
                                  }        */


    return 0;
}
                    



                        
                                      
                                      
                                      
                                          

          
                                
                         

  


