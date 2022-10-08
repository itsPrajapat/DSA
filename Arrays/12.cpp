// Linear Search
 /*
#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key){
            return 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<linearSearch(arr, n, key);

    return 0;
}
*/



// Binary Search

#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = low+high/2;
        if(arr[mid]==key){
            return 1;
        }else if(key<arr[mid]){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<binarySearch(arr, n, key);

    return 0;
}
