// Using priority queue

#include<iostream>
#include<queue>
using namespace std;

int main(){

    // max heap 
    cout<<"Max Heap Using priority Queue : "<<endl;
    priority_queue<int> maxHeap;
    maxHeap.push(4);
    maxHeap.push(2);
    maxHeap.push(5);
    maxHeap.push(3);

    cout<<"Element at top : "<<maxHeap.top()<<endl;
    maxHeap.pop();
    cout<<"Element at top : "<<maxHeap.top()<<endl;
    cout<<"Size is : "<<maxHeap.size()<<endl;
    
    if(maxHeap.empty()){
        cout<<"Heap is empty"<<endl;
    }else{
        cout<<"Heap is not empty"<<endl;
    }



    // Min Heap
    cout<<"Min Heap Using priority Queue : "<<endl;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(4);
    minHeap.push(2);
    minHeap.push(5);
    minHeap.push(3);
    cout<<"Element at top : "<<minHeap.top()<<endl;
    minHeap.pop();
    cout<<"Element at top : "<<minHeap.top()<<endl;

    
    return 0;
}