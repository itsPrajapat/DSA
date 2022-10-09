// Important Link : https://leetcode.com/problems/coin-change/

// You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.
// Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.
// You may assume that you have an infinite number of each kind of coin.

#include<bits/stdc++.h>
using namespace std;




// Using Recursion
int coinChange(int coins[], int n, int amount){
    // base case
    if(amount==0){
        return 0;
    }
    if(amount<0){
        return INT_MAX;
    }

    int mini = INT_MAX;

    for(int i=0; i<n; i++){
        int ans = coinChange(coins, n, amount-coins[i]);
        if(ans!=INT_MAX){
            mini = min(mini, ans+1);
        }
    }
    return mini;
}


// Using TopDown Approach
int topDownApproach(int coins[], int n, int amount, vector<int> &dp){
    //base case
    if(amount==0){
        return 0;
    }
    if(amount<0){
        return INT_MAX;
    }

    int mini = INT_MAX;

    if(dp[amount]!=-1){
        return dp[amount];
    }

     for(int i=0; i<n; i++){
        int ans = coinChange(coins, n, amount-coins[i]);
        if(ans!=INT_MAX){
            mini = min(mini, ans+1);
        }
    }
    dp[amount] = mini;
    return mini;

}

int main(){
    
    int n;
    cin>>n;
    int coins[n];

    for(int i=0; i<n; i++){
        cin>>coins[i];
    }

    int amount;
    cin>>amount;

    cout<<coinChange(coins, n, amount)<<endl;


    // Using TopDown Approach
    vector<int> dp(amount+1, -1);
    cout<<topDownApproach(coins, n, amount, dp)<<endl;

    return 0;
}