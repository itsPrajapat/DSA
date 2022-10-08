// Calculate the nth fibonacci number using Dynamic programming
//  Top-Down Approach ---> Recursion + Memoization

#include<bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> &dp)
{
    // base case
    if(n==0 || n==1){
        return n;
    }

    // Step3
    if(dp[n] != -1){
        return dp[n];
    }

    // Step2: Memoization
    dp[n] = fib(n-1, dp) + fib(n-2, dp);

    return dp[n];
}

int main(){

    int n;
    cin>>n;

    //Step1: Declare an array to store the previous calculated values
    vector<int> dp(n+1);
    // Initialize with value -1
    for(int i=0; i<=n; i++){
        dp[i] = -1;
    }

    cout<<fib(n, dp)<<endl;
    
    return 0;
}