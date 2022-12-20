// check if the given no is even or odd 
// if the first bit(right most bit) of the no. is set then it will be an odd no. otherwise it will be an even no 
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n&1){
        cout<<"Odd"<<endl;
    }else{
        cout<<"Even"<<endl;
    }
    
    return 0;
}