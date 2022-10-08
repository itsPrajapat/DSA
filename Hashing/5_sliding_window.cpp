// Problem : You are given an array with n elements, calculate the minimum sum of k, consecutive elements.
// Approach: (Sliding Window)
// (1) - Compute sum of the first k elements (i=0 to k)
// (2) - While increasing i, subtract arr[i-1] and add arr[i+k-1] in the previous sum, which will become current sum

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int k;
    cin>>k;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int curr_sum = 0;
    int ans = INT_MAX;

    for(int i=0; i<k; i++){
        curr_sum += arr[i];
    }

    ans = min(curr_sum, ans);

    // Sliding window
    for(int i=1; i<n-k+1; i++){
        curr_sum -= arr[i-1];
        curr_sum += arr[i+k-1];
        ans = min(curr_sum, ans);
    }


    cout<<ans<<endl;
    
    return 0;
}