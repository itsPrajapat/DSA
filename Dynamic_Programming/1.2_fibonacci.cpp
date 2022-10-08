// Calculate the nth fibonacci number using Dynamic programming
//  Bottom-Up Approach ---> Tabulation

/*
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    //Step0: Declare an array to store the values
    vector<int> dp(n+1);

    // Step1: Check the base case
    dp[0] = 0;
    dp[1] = 1;

    // Step2: 
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    // Step3: Return the dp[n] (answer)
    cout<<dp[n]<<endl;
    
    return 0;
}
*/




//  Space Optimisation

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int prev1 = 1;
    int prev2 = 0;

    if(n==0){
        cout<<prev2<<endl;
        return 0;
    }

    for(int i=2; i<=n; i++){
        int curr = prev1 + prev2;

        // Shifting logic
        prev2 = prev1;
        prev1 = curr;
    }

    // Step3: Return the dp[n] (answer)
    cout<<prev1<<endl;
    
    return 0;
}