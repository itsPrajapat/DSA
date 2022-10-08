// Insertion , deletion , heapify and sorting in heap
// Implementation using array


#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    // constructor
    heap(){
        arr[0] = -1;
        size = 0;
    }

    // Insertion in a heap
    void insert(int val){       // Time Complexity --> O(logn)
        size = size + 1;
        int index = size;

        // step-1 Insert at the end
        arr[index] = val;

        // Take it to the right position
        while(index > 1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }else{
                return;
            }
        }
    }


    // Delete in heap // We always delete root node
    void deletion(){      // Time Complexity --> O(logn)
        if(size==0){
            cout<<"Nothing to delete"<<endl;
            return;
        }

        // step1: put last element into first index 
        arr[1] = arr[size];  

        // step2: remove last element
        size--;

        // step3: take root node to its correct position
        int i = 1;
        while(i<size){
            int leftIndex = 2*i;
            int rightIndex = 2*i + 1;

            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else{
                return;
            }
        }
    }

    // print the heap
    void print(){
        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};


// Heapify Function --> ye node ko uski right position pe dal deta hai
void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

    if(left <= n  && arr[largest] < arr[left]){
        largest = left;
    }
    if(right <= n  && arr[largest] < arr[right]){
        largest = right;
    }

    // iska mtlb i update hua hai or usko swap krna pdegaa
    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}


// Heap sort
void heapSort(int arr[], int n){
    int size = n;

    while(size>1){
        //step1: swap
        swap(arr[size], arr[1]);
        size--; 

        // step2
        heapify(arr, size, 1);
    }
}


int main(){

    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);  
    h.print(); // printing

    h.deletion();
    h.print(); // printing

    int arr[] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for(int i=n/2; i>0; i--){     // (n/2+1) to n are the leaf nodes so we don't need to process them
        heapify(arr, n, i);
    }
    cout<<"Printing the array now "<<endl;
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    // Heap sort
    heapSort(arr, n);
    cout<<"Printing the sorted array now "<<endl;
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    
    return 0;
}