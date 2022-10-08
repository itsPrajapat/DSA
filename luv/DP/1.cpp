// Calculate the nth fibonacci no. 

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

int dp[N];

// Top-Down Approach
int topToBottomFib(int n){
    // base case
    if(n==0 || n==1){
        return n;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    // Memoization
    dp[n] = topToBottomFib(n-1) + topToBottomFib(n-2);

    return dp[n];
}

// Bottom-Up Approach
int bottomToUpFib(int n){
    dp[0] = 0;
    dp[1] = 1;

    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

int main(){

    memset(dp, -1, sizeof(dp));

    int n;
    cin>>n;

    cout<<topToBottomFib(n)<<endl;
    cout<<bottomToUpFib(n)<<endl;
    
    return 0;
}