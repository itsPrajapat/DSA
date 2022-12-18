#include<iostream>
#include<queue>
using namespace std;

int kthLargest(int arr[], int n, int k){

    // min heap
    priority_queue<int, vector<int>, greater<int>> pq;

    // step1: push the first k element in heap
    for(int i=0; i<k; i++){
        pq.push(arr[i]);
    }

    // step2: 
    for(int i=k; i<n; i++){
        if(arr[i] > pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    // strep3: return the top element of heap
    int ans = pq.top();
    return ans;
}

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

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    cout<<"kthSmallest :  "<<kthSmallest(arr, n, k); cout<<endl;
    cout<<"kthLargest : "<<kthLargest(arr, n, k); cout<<endl;
    
    return 0;
}