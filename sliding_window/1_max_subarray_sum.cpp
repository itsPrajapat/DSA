// Calculate the sum of maximum of all subarrays of size k 

#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach  --> Time Complexity = O(n*k)
int getSum(int arr[], int k, int size){

    int maxSum = 0;
    
    for(int i=0; i<=size-k; i++){

        int sum = 0;

        for(int j=i; j<i+k; j++){
            sum = sum + arr[j];
        }

        maxSum = max(sum, maxSum);
    }
    return maxSum;
}


// Sliding Window ---> Time Complexity = O(n)
int max_sum_k(int arr[], int k, int size){

    int start = 0;
    int sum = 0;
    int maxSum = 0;

    for(int end=0; end<size; end++){
        sum += arr[end];

        if(end>=k-1){
            maxSum = max(sum, maxSum);
            sum = sum - arr[start];
            start++;
        }
    }
    return maxSum;
}

int main(){

    int arr[6] = {2, 1, 5, 1, 3, 2};
    int k = 3;
    
    // Brute Force
    cout<<"Sum using Brute Force Approach : "<<getSum(arr, k, 6)<<endl;
    cout<<"Sum using Sliding Window Approach : "<<max_sum_k(arr, k, 6)<<endl;
    
    return 0;
}