// Linear search

#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key){
    // base case
    if(n==0){
        return false;
    }

    if(arr[0]==key){
        return true;
    }

    return linearSearch(arr+1, n-1, key);

    
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

    bool found = linearSearch(arr, n, key);

    if(found){
        cout<<"Key Found"<<endl;
    }else{
        cout<<"Key Not Found"<<endl;
    }

    return 0;
}