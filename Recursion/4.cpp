// Sum of an array

#include<iostream>
using namespace std;

int sum(int arr[], int n){

    // base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }

    return arr[0]+sum(arr+1, n-1);
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<sum(arr, n);
    
    return 0;
}