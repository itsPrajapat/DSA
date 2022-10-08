#include<iostream>
using namespace std;

int main(){

  /*  int n;
    int a=0 , b=1;
    int c;

    cout<<"enter the no. of fibonacci series :";
    cin>>n;

    cout<<a<<" "<<b<<" ";

    for(int i=2; i<n; i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    cout<<endl;  */



  /*  // ****** FIBANOCCI SERIES USING ARRAY *****
    
    int n;
    int arr[100];
    cout<<"enter the no. of fibonacci series :";
    cin>>n;

      arr[0] = 0;
      arr[1] = 1;

      for(int i=2; i<n; i++){
          arr[i] = arr[i-1] + arr[i-2];
      }

      for(int i=0; i<n; i++){
          cout<<arr[i]<<endl;
      }  */


       int n;
    int arr[100];
    cout<<"enter the no. of fibonacci series :";
    cin>>n;

      arr[0] = 0;
      arr[1] = 1;
      cout<<arr[0]<<" "<<arr[1]<<" ";

      for(int i=2; i<n; i++){
          arr[i] = arr[i-1] + arr[i-2];
          cout<<arr[i]<<" ";
      }



    
    return 0;
}