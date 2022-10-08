// Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.


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

    int min = INT_MAX;
    int max = INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    cout<<min<<" "<<max;

    return 0;
}