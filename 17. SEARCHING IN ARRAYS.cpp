// TO FIND A KEY IN THE ARRAY

 /* #include<iostream>
using namespace std;

int linearsearch(int arr[], int n, int key)  // this is the linear search of time complexity O(n)
{
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
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

    cout<<linearsearch(arr,n,key);

    return 0;
} */



//******BINARY SEARCH****** we use this to decrease time complexity . for the binary search array should be in a sorted manner

/* #include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int s=0;   // s means starting point
    int e=n;   // e means end point

    while(s<=n){
        
        int mid = (s+e)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else
        {
            s = mid +1;
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

    cout<<binarysearch(arr , n , key);

    return 0;
} */





