// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int profit = 0;

    int i=0;
    int j=i+1;
    while(i<n){
        while(j<n)
        {
            if(arr[j]-arr[i]<=0){
                i++;
                j=i+1;
            }
            else{
                profit = max(arr[j]-arr[i], profit);
                j++;
            }
        }
        i++;
    }
    cout<<profit<<endl;
    return 0;
}