// Given n and i, Check whether ith bit is set or not 
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,i;
    cin>>n>>i;

    int temp = n>>i;
    if(temp&1){
        cout<<"Bit is set"<<endl;
    }else{
        cout<<"Bit is not set"<<endl;
    }

    return 0;
}