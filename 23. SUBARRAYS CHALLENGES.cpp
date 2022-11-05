// Q(1)  Print the possible subarray of a array arr[] 

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

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int k = i;
            while(k<=j)
            {
               cout<<arr[k]<<" ";
               k++;
            }
            cout<<endl;
        }
        cout<<endl;

    }
    return 0;
} */


// Q(2) Find the subarray in an array arr[] which has maximum sum 

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
     
     int maxSum = INT_MIN;

     for(int i=0; i<n; i++)
     {
         for(int j=i; j<n; j++)
         {
             int sum = 0;
             for(int k=i; k<=j; k++)
             {
                 sum = sum + arr[k];
             }
             maxSum = max(maxSum , sum);
         }
     }
     
     cout<<maxSum;
    
    return 0;
} */


// Another method for the same question
/* 
 #include<iostream>
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

    int currSum[n+1];
    currSum[0] = 0;

    for(int i=1; i<=n; i++)
    {
        currSum[i] = currSum[i-1] + arr[i-1];
    }

    int maxSum = INT_MIN;

    for(int i=1; i<=n; i++)
    {
      int sum = 0;
      for(int j=0; j<i; j++)
      {
          sum = currSum[i] - currSum[j];
          maxSum = max(sum , maxSum);
      }
    }
    cout<<maxSum;

    return 0;
}  */



// Another method for the same question

#include<iostream>
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

    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++)
    {
        currentSum += arr[i];
        if(currentSum>maxSum){
            maxSum = currentSum;
        }
        if(currentSum<0){
            currentSum=0;
        }
        
    }
    cout<<maxSum;
    return 0;
}   




// CIRCULAR SUBARRAY SUM

/* #include<iostream>
#include<climits>
using namespace std;

int kedane(int arr[] , int n)
{
    int currentsum = 0;
    int maxsum = INT_MIN;

    for(int i=0; i<n; i++)
    {
        currentsum += arr[i];
        if(currentsum<0){
            currentsum = 0;
        }
        maxsum = max(maxsum , currentsum);
    }
    return maxsum;
}

int main(){
    
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kedane(arr , n);

    int totalsum = 0;
    for(int i=0; i<n; i++)
    {
         totalsum += arr[i];
         arr[i] = -arr[i];
    }

    wrapsum = totalsum + kedane(arr , n);

    cout<<max(wrapsum , nonwrapsum);
    return 0;
} */



// PAIR SUM PROBLEM  
// check if there exists two elements in an array that their sum is equal to given k

// #include<iostream>
// using namespace std;

// bool pairsum(int arr[], int n, int k)
// {
//     for(int i=0; i<n-1; i++)
//     {
//         for(int j=i; j<n; j++)
//         {
//             if(arr[i]+arr[j]==k)
//             {
//                 cout<<i<<" "<<j<<endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main(){

//     int arr[] = {2,4,7,11,14,16,20,21};
//     int k = 31;

//     cout<<pairsum(arr, 8, k)<<endl;
    
//     return 0;
// }


// ANOTHER METHOD FOR THE ABOVE QUESTION

// this method we can use when our array will be sorted otherwise first we have to sort our array
/* 
#include<iostream>
using namespace std;

bool pairsum(int arr[], int n, int k)
{
  int low = 0;
  int high = n-1;

  while (low<high)
  {
      if(arr[low] + arr[high] == k)
      {
          cout<<low<<" "<<high<<endl;
          return true;
      }
      else if(arr[low] + arr[high] > k)
      {
          high--;
      }
      else
      {
          low++;
      }
      
  }
  return false;
}
int main(){

    int arr[] = {2,4,7,11,14,16,20,21};
    int k = 31;

    cout<<pairsum(arr, 8, k)<<endl;
    
    return 0;
}
 */








