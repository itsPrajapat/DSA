#include<bits/stdc++.h>
using namespace std;

// sum(n, arr) --> sum of elements in arr uptill n index 

int sum(int n, int arr[]){
    if(n<0){
        return 0;
    }
    return sum(n-1, arr) + arr[n];
}

int digit_sum(int n){
    // base case
    if(n==0){
        return 0;
    }
    return digit_sum(n/10) + (n%10);
}


int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<sum(4,arr)<<endl;
    cout<<digit_sum(1234)<<endl;
    return 0;
}

// Time complexity depends on
// 1. Number of function calls 
// 2. The complexity of each function 