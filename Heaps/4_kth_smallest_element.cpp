#include<iostream>
#include<queue>
using namespace std;

int kthSmallest(int arr[], int n, int k){

    priority_queue<int> pq;

    // step1: push the first k element in heap
    for(int i=0; i<k; i++){
        pq.push(arr[i]);
    }

    // step2: 
    for(int i=k; i<n; i++){
        if(arr[i] < pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    // strep3: return the top element of heap
    int ans = pq.top();
    return ans;
}

int main(){

    int n = 6;
    int arr[] = {7, 10, 4, 3, 20, 15};
    int k = 3;

    cout<<kthSmallest(arr, n, k);
    
    return 0;
}