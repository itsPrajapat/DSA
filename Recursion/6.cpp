// Binary search

#include<iostream>
using namespace std;

bool binarySearch(int arr[], int st, int end, int key){
    // base case
    if(st>end){
        return false;
    }

    int mid = (st+end)/2;
    if(arr[mid]==key){
        return true;
    }
    
    if(key>arr[mid]){
        return binarySearch(arr, mid+1, end, key);
    }else {
        return binarySearch(arr, st, mid-1, key);
    }
}

int main(){
    
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    bool found = binarySearch(arr, 0, n-1, key);

    if(found){
        cout<<"Key Found"<<endl;
    }else{
        cout<<"Key Not Found"<<endl;
    }

    return 0;
}