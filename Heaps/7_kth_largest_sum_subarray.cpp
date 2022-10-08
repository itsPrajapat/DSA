// You are given an array Arr of size N. You have to find the K-th largest sum of contiguous subarray within the array elements.


#include<iostream>
#include<queue>
using namespace std;

int kthLargest(int arr[], int n, int k){

    // declaring a min heap
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0; i<n; i++){

        int sum = 0;

        for(int j=i; j<n; j++){
            sum += arr[j];
            
            if(pq.size() < k){
                pq.push(sum);
            }
            else{
                if(sum > pq.top()){
                    pq.pop();
                    pq.push(sum);
                }
            } 
        }
    }
    return pq.top();
}

int main(){

    int n = 3;
    int arr[3] = {3, 2, 1};
    int k = 2;

    cout<<kthLargest(arr, n, k);

    // Time Complexity --> O(n^2*log(k))
    // Space Complexity --> O(k)
    
    return 0;
}