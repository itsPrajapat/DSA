// Link : https://practice.geeksforgeeks.org/problems/merge-two-binary-max-heap0144/1#
// There are given N ropes of different lengths, we need to connect these ropes into one rope. The cost to connect two ropes is equal to sum of their lengths. The task is to connect the ropes with minimum cost.
// Ex. Input:
// n = 4;
// arr[] = {4, 3, 2, 6}
// output:
// 29

#include<iostream>
#include<queue>
using namespace std;

int minCost(int arr[], int n){

    // create a min heap
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0; i<n; i++){
        pq.push(arr[i]);
    }

    int cost = 0;

    while(pq.size() > 1){
        int a = pq.top();
        pq.pop();

        int b = pq.top();
        pq.pop();

        int sum = a+b;
        cost += sum;

        pq.push(sum);
    }
    return cost;
}

int main(){

    int arr[4] = {4, 3, 2, 6};
    int n = 4;

    cout<<minCost(arr, n);

    return 0;
}