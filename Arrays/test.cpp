#include<bits/stdc++.h>
using namespace std;

int maxValue(int arr[], int n){
    int ans = INT_MIN;

    for(int i=0; i<n; i++){
        ans = max(ans, arr[i]);
    }

    return ans;
}

int minValue(int arr[], int n){
    int ans = INT_MAX;

    for(int i=0; i<n; i++){
        ans = min(ans, arr[i]);
    }

    return ans;
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Max :"<<maxValue(arr, n)<<endl;
    cout<<"Min :"<<minValue(arr, n)<<endl;

    // Kedane's algorithm
    int curr_Sum = 0;
    int sum = INT_MIN;
    for(int i=0; i<n; i++){
        if(curr_Sum<0){
            curr_Sum=0;
        }
        curr_Sum+=arr[i];
        sum = max(sum, curr_Sum);
    }
    cout<<sum<<endl;

    return 0;
}