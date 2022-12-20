// Given two numbers left(l) and right(r) calculate the XOR of all the no b/w these two given no 
// Ex. l=3, r=6;   ans = 3^4^5^6


#include<bits/stdc++.h>
using namespace std;

int calcXorOptimised(int n){
    if(n%4==0) return n;
    if(n%4==1) return 1;
    if(n%4==2) return n+1;
    if(n%4==3) return 0;

    return 0;
}

int main(){

    int l,r;
    cin>>l>>r;

    int ans = calcXorOptimised(r)^calcXorOptimised(l-1);
    cout<<ans<<endl;
    
    return 0;
}