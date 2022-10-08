#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int check[n+1] = {0};
    check[0] = 1;
    int a,b;

    for(int i=0; i<n; i++)
    {
        if(check[arr[i]] == 0){
            check[arr[i]] = 1;
        }else{
            a=arr[i];
        }
    }
    for(int i=1; i<n+1; i++)
    {
       if(check[i]==0){
        b = i;
        break;
       }
    }

    cout<<a<<" "<<b<<endl;



    return 0;
}