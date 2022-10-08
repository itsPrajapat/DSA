// check if a given array is sorted or not 

#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    if(n==0 || n==1){
        return true;
    }
    bool restArray = isSorted(arr+1, n-1);
    
    if(arr[0]<=arr[1] && restArray){
        return true;
    }else{
        return false;
    }
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<isSorted(arr, n);
    
    return 0;
}