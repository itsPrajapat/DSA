/* Q(1)  First Repeating Element
Given an array arr[] of size n. The task is to find the first repeating element in the array of integers, i.e., an element that 
occurs more than once and whose index of first occurence is smallest.   */

// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
    
//     int n;
//      cin>>n;

//      int arr[n];

//      for(int i=0; i<n; i++)
//      {
//          cin>>arr[i];
//      }

//     const int N = 100000;
//     int idx[N];

//     for(int i=0; i<N; i++)
//     {
//         idx[i] = -1;
//     }

//     int minidx = INT_MAX;

//     for(int i=0; i<n; i++)
//     {
//         if(idx[arr[i]] != -1)
//         {
//             minidx = min(minidx, idx[arr[i]]);
//         }
//         else
//         {
//              idx[arr[i]] = i;
//         }          
//     }

//        if(minidx == INT_MAX)
//         {
//             cout<<"-1";
//         }
//         else
//         {
//             cout<< minidx + 1 <<endl;
//         }

//     return 0;
// }  




/* Q(2) Given  an unsorted array A of size N of non-negative integers, find a continuous subarray which adds to a given number S.*/

/* #include<iostream>
using namespace std;

int main(){
    
    int n;
    int s;

    cin>>n>>s;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int i=0;
    int j=0;
    int st = -1;
    int en = -1;
    int sum = 0;

    while(j<n && sum+arr[j] <= s)
    {
        sum = sum+arr[j];
        j++;
    }

    if(sum==s)
    {
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }

    while(j<n)
    {
        sum = sum + arr[j];
        while(sum>s)
        {
            sum = sum - arr[i];
            i++;
        } 

        if(sum==s)
        {
            st = i+i;
            en = j+1;
            break;
        }
         j++;
    }

    cout<< st <<" "<< en <<endl;

    return 0;
}  
*/

/* Q(3)  You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the 
         array  */

/* #include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    const int N = 100000;

    bool check[N];

    for(int i=0; i<N; i++)
    {
        check[i] = false;
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]>=0)
        {
            check[arr[i]] = true;
        }
    }

    int ans = -1;
    for(int i=0; i<N; i++)
    {
        if(check[i]== false)
        {
            ans = i;
            break;
        }
    }

    cout<< ans <<endl;
    
    return 0;
}

*/





