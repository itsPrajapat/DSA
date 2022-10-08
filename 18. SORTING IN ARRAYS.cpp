//********METHOD OF SORTING******

// (1)SELECTION SORT = find the minimum element in unsorted array and swap it with element at beginning

// #include<iostream>
// using namespace std;

// int main(){
    
//     int n;
//     cin>>n;

//     int arr[n];

//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }

//     for(int i=0; i<(n-1); i++)
//     {
//         for(int j=i+1; j<n; j++){
         
//          if(arr[j]<arr[i])
//          {
//          int temp = arr[j];
//          arr[j]=arr[i];
//          arr[i]=temp;
//          }
//         }
//     }

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }
 
#include<iostream>
using namespace std;

int main(){
    
    int n = 1;
    cin>>n;

    int arr[] = {9, 5, 23, 17, 20, 12, 30, 25};

    for(int i=0; i<(n-1); i++)
    {
        for(int j=i+1; j<n; j++){
         
         if(arr[j]<arr[i])
         {
         int temp = arr[j];
         arr[j]=arr[i];
         arr[i]=temp;
         }
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
 


