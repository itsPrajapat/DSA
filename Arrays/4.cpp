// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr+n);
    int i;
    for ( i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            cout<<"true"<<endl;
            break;
        }
    }

    if(i==n){
        cout<<"false"<<endl;
    }
    return 0;
}