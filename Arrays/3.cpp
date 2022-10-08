// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

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


int curr_sum = 0;
int sum = INT_MIN;
// Kedane's algorithm
    for(int i=0; i<n; i++)
    {
        if(curr_sum<0){
            curr_sum = 0;
        }
        curr_sum += arr[i];
        sum = max(sum, curr_sum);
    }

   cout<<sum<<endl;

   


    return 0;
}