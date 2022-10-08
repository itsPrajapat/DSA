// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

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

    int i=0; 
    
    int count;
    int sum=0;
    
    int water = 0;

    while(i<n){
        while(arr[i]<=0){
            i++;
        }
        while(arr[i+1]-arr[i]>=0){
            i++;
        }
        
        sum=arr[i+1];
        count=1;
        int j=i+2;
        while(j<n)
        {
            if(arr[j]-arr[i]<0 && j<n-1){
                sum+=arr[j];
                j++;
                count++;
            }
            else{
                int x = min(arr[i],arr[j])*count - sum;
                if(x>0){
                    water += x;
                }else{
                    break;
                }
                
                i = j;
                j=i+2;
                sum=arr[i+1];
                count=1;
            }
        }
        i++;
    }
    cout<<water;
    return 0;
}