// Q(1) Given an array[] of size n. For every i from 0 to n-1 output max(arr[0],arr[1],....,arr[i]).

/* #include<iostream>
#include<climits>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int mx = INT_MIN;
    for(int i=0; i<n; i++)
    {
        int maximum = max(arr[i],mx);
        mx = maximum;
        cout<<maximum;
    }
    return 0;
} */



// Q(2) Given an array[] of size n. Output sum of each subarray of the given array.

//  #include<iostream>
// using namespace std;

// int main(){
    
//     int n;
//     cin>>n;

//     int arr[n];

//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }

//     int sum = 0;

//     for(int i=0; i<n; i++)
//     {          
//         for(int j=i; j<n; j++)
//         {
//           sum = sum + arr[j];
//           cout<<sum<<endl;
//         }
//          sum = 0;
//     }  
//     return 0;
// } 



/* Q(3)  An arithematic array is an array that contains at least two integers and the differences between consecutive integers are equal. For example [9,10], [3,3,3], and [9,7,3,5] are arithematic arrays, while [1,3,3,7], [2,1,2] and [1,2,4] are not arithematic arrays.
Saraswati has an array of N non-negative integers. The i-th integer of the array is A. She wants to choose a contiguous arithematic subarray from her array that has the maximum length. Please help her to determine the length of the longest contiguous arithematic subarray. */

//  #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;

//     int arr[n];

//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
    
//     int ans=2;
//     int pd=arr[1]-arr[0];
//     int j=2;
//     int current = 2;

//     while (j<n)
//     {
//         if(pd == (arr[j]-arr[j-1]))
//         {
//             current++;
//         }
//         else
//         {
//             pd = arr[j]-arr[j-1];
//             current = 2;
//         }
//         ans = max(ans, current);
//         j++;
//     }
    
//     cout<<ans;

//     return 0;
// } 


/* Q. Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day
      is V. A day is "recorded breaking" if it satisfies both of the following condition:

      (i) The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
      (ii) Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on
           the following day.

      Note that the very first day could be a record breaking day!

      Please help Isyana find out the number of record breaking days.      */

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;
    
//     int arr[n+1];
//     arr[n] = -1;

//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }

//     if(n==1)
//     {
//         cout<<"1"<<endl;
//         return 0;
//     }

//     int ans = 0;
//     int mx = -1;
    
//    for(int i=0; i<n; i++)
//    {
//        if(arr[i]>mx && arr[i]>arr[i+1])
//        {
//            ans++;
//        }
//        mx = max(mx , arr[i]);
//    }

//    cout<<ans;
   
//     return 0;
// }












