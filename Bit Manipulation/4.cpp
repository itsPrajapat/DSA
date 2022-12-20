// Given N, print the XOR of all no. between 1 to N 
#include<bits/stdc++.h>
using namespace std;

int calcXor(int n){
    int ans = 1;
    for(int i=2; i<=n; i++){
        ans = ans^i;
    }
    return ans;
}

int calcXorOptimised(int n){
    if(n%4==0) return n;
    if(n%4==1) return 1;
    if(n%4==2) return n+1;
    if(n%4==3) return 0;

    return 0;
}

int main(){
    
    int n;
    cin>>n;

    cout<<calcXor(n)<<endl;  // O(n)

    // optimised way
    cout<<calcXorOptimised(n)<<endl;   // O(1)

    return 0;
}